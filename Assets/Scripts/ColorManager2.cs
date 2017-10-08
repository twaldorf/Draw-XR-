﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class ColorManager2 : MonoBehaviour
{

    public static ColorManager2 Instance;

    public OVRInput.Button buttonX;
    public OVRInput.Button triggerL;

    public Color color1;
    public Color color2;
    public Color color3;

    private PhotonView photonView;

    void Awake()
    {

        if (Instance == null)
        {
            Instance = this;
        }
    }

    void OnDestroy()
    {

        if (Instance == null)
        {
            Instance = this;
        }
    }

    private Color color;

    void Start()
    {
        color = color1;
        photonView = PhotonView.Get(this);
    }

    void Update()
    {
        if ((OVRInput.GetUp(buttonX)))
        {

            photonView.RPC("ChangeColor", PhotonTargets.Others, null);

            if (color == color1)
            {
                color = color2;
            }
            else if (color == color2)
            {
                color = color3;
            }
            else
            {
                color = color1;
            }

        }
    }

    public Color GetCurrentColor()
    {
        return this.color;
    }

    [PunRPC]
    public void ChangeColor()
    {
        if (color == color1)
        {
            color = color2;
        }
        else if (color == color2)
        {
            color = color3;
        }
        else
        {
            color = color1;
        }
    }
}


