using UnityEngine;
using System.Collections;
using UnityEngine.Purchasing;

public class PurchaseManager : MonoBehaviour, IStoreListener
{
 //   public BuyManager buyManager;
    private IStoreController controller;

    void Start()
    {

        var module = StandardPurchasingModule.Instance();
        ConfigurationBuilder builder = ConfigurationBuilder.Instance(module);
        //builder.AddProduct("com.pawn.pixelSubscribe", ProductType.Subscription);
        builder.AddProduct("com.pawn.xiaohao", ProductType.Consumable);
        

        UnityPurchasing.Initialize(this, builder);
            
    }

    /// <summary>
    /// Called when Unity IAP is ready to make purchases.
    /// </summary>
    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        Debug.Log("+++++=initOK");
        this.controller = controller;
    }

    /// <summary>
    /// Called when Unity IAP encounters an unrecoverable initialization error.
    ///
    /// Note that this will not be called if Internet is unavailable; Unity IAP
    /// will attempt initialization until it becomes available.
    /// </summary>
    public void OnInitializeFailed(InitializationFailureReason error)
    {
        Debug.Log("Billing failed to initialize!");
        switch (error)
        {
            case InitializationFailureReason.AppNotKnown:
                Debug.LogError("Is your App correctly uploaded on the relevant publisher console?");
                break;
            case InitializationFailureReason.PurchasingUnavailable:
                // Ask the user if billing is disabled in device settings.
                Debug.Log("Billing disabled!");
                break;
            case InitializationFailureReason.NoProductsAvailable:
                // Developer configuration error; check product metadata.
                Debug.Log("No products available for purchase!");
                break;
        }
    }

    /// <summary>
    /// Called when a purchase completes.
    ///
    /// May be called at any time after OnInitialized().
    /// </summary>
    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e)
    {
        Debug.Log("--------------oooooo");
        return PurchaseProcessingResult.Complete;
    }

    /// <summary>
    /// Called when a purchase fails.
    /// </summary>
    public void OnPurchaseFailed(Product item, PurchaseFailureReason r)
    {
        Debug.Log("购买失败");
    }

    public void OnPurchaseOk()
    {
        Debug.Log("+++++++++++++Goumaichenggong");
    }
    public void OnPurchaseClicked()
    {
        Debug.Log("------------------------");
        var product = controller.products.WithID("com.pawn.xiaohao");
        if (product != null)
        {
            Debug.Log("titleText-----" + product.metadata.localizedTitle);
            Debug.Log("descriptionText----" + product.metadata.localizedDescription);
            Debug.Log("priceText-----" + product.metadata.localizedPriceString);

        }
        else
        {
            Debug.Log("null -------- ");
        }
        Debug.Log("----------");
        //controller.InitiatePurchase("com.pawn.pixelSubscribe");
        controller.InitiatePurchase("com.pawn.xiaohao");
        
       // CodelessIAPStoreListener.Instance.InitiatePurchase("com.pawn.test");
    }
}