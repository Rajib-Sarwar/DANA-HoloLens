//using System;

//public class GetLocations(): Monobehaviour
//{
//	public getLocn()
//	{

//        public delegate void OnGetDataCompleted(string id, string json);

//        public void GetDataAsync(string url, string id, OnGetDataCompleted handler)
//    {
//    #if (PLATFORM_HOLOLENS)
//        IAsyncAction asyncAction = Windows.System.Threading.ThreadPool.RunAsync(
//            async (workItem) =>
//            {
//                try
//                {
//                    WebRequest webRequest = WebRequest.Create(url);
//                    webRequest.Method = "GET";
//                    webRequest.Headers["Content-Type"] = "application/json";

//                    WebResponse response = await webRequest.GetResponseAsync();

//                    Stream result = response.GetResponseStream();
//                    StreamReader reader = new StreamReader(result);

//                    string json = reader.ReadToEnd();

//                    handler(id, json);
//                }
//                catch (Exception)
//                {
//                    // handle errors
//                }
//            }
//            );
//        asyncAction.Completed = new AsyncActionCompletedHandler(GetDataAsyncCompleted);

//        #endif
//    }

//#if (PLATFORM_HOLOLENS)
//    private void GetDataAsyncCompleted(IAsyncAction asyncInfo, AsyncStatus asyncStatus)
//    {
//    }
//#endif

//	}
//}
