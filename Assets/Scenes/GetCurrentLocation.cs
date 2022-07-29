//using System;
//using System.Threading;
//using System.Threading.Tasks;
//using Windows.Devices.Geolocation;


//public class Geolocation: Monobehaviour
//{
//	public getposition()
//	{
//		[Windows.Foundation.Metadata.Overload("GetGeopositionAsync")]
//		[Windows.Foundation.Metadata.RemoteAsync]
//		public IAsyncOperation<Geoposition> GetGeopositionAsync();
//        var accessStatus = await Geolocator.RequestAccessAsync();
//        switch (accessStatus)
//        {
//            case GeolocationAccessStatus.Allowed:
//                // notify user: Waiting for update

//                // If DesiredAccuracy or DesiredAccuracyInMeters are not set (or value is 0), DesiredAccuracy.Default is used.
//                Geolocator geolocator = new Geolocator { DesiredAccuracyInMeters = _desireAccuracyInMetersValue };

//                // Subscribe to StatusChanged event to get updates of location status changes
//                _geolocator.StatusChanged += OnStatusChanged;

//                // Carry out the operation
//                Geoposition pos = await geolocator.GetGeopositionAsync();

//                UpdateLocationData(pos);
//                // notify user: Location updated
//                break;

//            case GeolocationAccessStatus.Denied:
//                // notify user: Access to location is denied

//                break;

//            case GeolocationAccessStatus.Unspecified:
//                // notify user: Unspecified error
//                break;
//        }
//    }
//}
