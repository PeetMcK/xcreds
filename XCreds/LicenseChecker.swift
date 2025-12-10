//
//  LicenseChecker.swift
//  XCreds
//
//  Created by Timothy Perfitt on 3/28/23.
//

import Cocoa

class LicenseChecker: NSObject {
    enum LicenseState {
        case valid(Int)
        case invalid
        case trial(Int)
        case trialExpired
        case expired

    }

    func currentLicenseState() -> LicenseState {
        // Removed ProductLicense dependency - always return valid license
        // Original code checked TCSLicenseCheck and had trial period logic
        return .valid(0)
    }

}
