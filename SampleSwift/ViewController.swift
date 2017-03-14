//
//  ViewController.swift
//  SampleSwift
//
//  Created by Vinicius de Paula on 08/03/17.
//  Copyright © 2017 Vinicius de Paula. All rights reserved.
//

import UIKit
import CoreLocation
import SystemConfiguration

class ViewController: UIViewController {
    
    var locationManager: CLLocationManager!

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        locationManager = CLLocationManager()
        locationManager.distanceFilter = kCLDistanceFilterNone
        //whenever we move
        locationManager.desiredAccuracy = kCLLocationAccuracyBest
        locationManager.startUpdatingLocation()
        locationManager.requestWhenInUseAuthorization()
        
        let pushNotificationManager: PushNotificationManager =
            PushNotificationManager.sharedInstance()
        pushNotificationManager.handleUpdateLocations(locationManager)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

