using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Net;
using System;
using System.IO;

public class SceneChanger : MonoBehaviour
{
    public void WelcomeScene()
    {
        SceneManager.LoadScene("WelcomeScene");
    }
    public void MenuScene()
    {
        SceneManager.LoadScene("MenuScene");
    }
    public void ArScene()
    {
        SceneManager.LoadScene("ArScanScene");
    }
    public void ResultScene()
    {
        SceneManager.LoadScene("ResultScene");
    }

}