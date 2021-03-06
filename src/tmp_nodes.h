#define IMPORT_ADDNODES do {\
LogPrintf("Loading extra peers...\n");\
if (GetBoolArg("-regtest", false) || GetBoolArg("-testnet", false)) {\
    LogPrintf("Nevermind, we're testnet or regtesting.\n"); continue;\
}\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:953c:4db:1edc:479b:3298]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:2423:6e9:af92:1a8c]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:2c33:240e:5211:1400]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:2c9e:16:f1c0:841a]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:953c:2876:19d9:9fe2:f65d]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:10e9:b8:9c38:8dda]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:389b:26ab:5250:bd79]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:78cf:1803:8c4:a9d2:d186]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:78cf:c5c:3d39:a613:ca0b]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:1c13:195f:a714:df6d]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:18d2:1cda:b2bb:2837]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:1cc8:15c1:a931:e975]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:3c15:12af:abe7:15c9]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:1439:2630:a9a4:a0d6]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:df:2d67:ab39:e031]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:1401:304a:cb16:462c]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:40c:12c3:256e:f97d]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:3895:3c48:d0a5:412]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:30cd:cf1:d2d1:ac46]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:4c9:386f:bae0:2bc3]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=134.255.218.110:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:1c3d:3872:97dd:983a]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2604:2d80:4018:c3a0::4]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:78cf:14a7:92c:a4a6:72c1]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:3870:2810:6173:485c]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:30a3:200b:b950:8e2d]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:24ec:277c:9c19:fc8c]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:3444:3d7f:a952:ca47]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:1417:38e7:c156:93e8]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:3c2c:597:abe3:4609]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:308f:3b1:b3bc:5e32]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:1401:30c1:8348:3ead]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:28d1:2e97:a759:101a]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:286f:6c16:9826:58a4]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:4f:d37:717e:6532]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:206b:d60:b45c:7818]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6ab8:c66:2e2b:b598:246]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:77:839:51a0:9e4]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2600:8801:b02:d900:f04c:33e1:25c:3d87]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:953c:20:2ee1:3205:5299]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6ab8:3c6c:f36:9308:39d8]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:1cbb:3a5:e7c4:6501]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=172.104.144.242:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:953c:1c36:3363:b6c5:2d6e]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=64.137.192.201:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:1062:1331:9d48:6d02]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=41.57.17.48:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:2cc8:3f15:8a3c:9c3b]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:18c3:5b6:a973:3334]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6ab8:2cbc:fbff:3833:ac47]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6ab8:4d9:196e:b096:ac54]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:78cf:30c2:6558:a0a4:165e]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:caa:2ad9:bedc:edcf]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:8fa:335:931b:6aaa]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[240b:11:4a0:8d00:1488:c4f9:27ae:718d]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:953c:1029:4db8:27fb:f2ef]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:1c7c:618:d2b3:fdb3]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2605:e000:3dd0:ee00::1]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:24:3ca1:b677:8802]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=91.6.188.137:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:d:344a:ba5a:aaa]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:2c8d:290d:a56a:f958]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:20a4:3bde:d0de:3a0a]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:1858:2ab5:fde7:fde]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:38a7:21a8:e78e:4ff0]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6ab8:385f:fbff:b382:e259]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=41.57.17.48:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:4d3:277f:b984:5055]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:1ce5:3c4:abe3:da19]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:953c:202d:1a36:b940:85b3]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:2c9e:16:f1c0:841a]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:3ce9:223:434e:e6e5]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:d1:16fb:b3bf:ddc0]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:bd:15e3:97f2:5dc9]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:953c:3816:8c2d:af91:9973]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:3c15:12af:abe7:15c9]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:1490:268a:be7f:5b3d]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:2cc5:811c:4313:d0b8]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:1c38:b3d:9bfb:9bad]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:344f:979:9cb6:2ea4]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:78cf:3c11:e956:da1b:13d]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:18cc:fbfd:9fdc:b4cc]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:1027:e0b:b478:a26d]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6ab8:3c6c:f36:9308:39d8]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:896:1844:ae7d:1fdf]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:20c9:3342:e029:6a12]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:ce4:c85:b590:4b85]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:2c31:13df:b682:d30f]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:30ab:3ecc:355e:81ba]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2405:4800:108c:a61a:64be:8c6d:5621:c7c0]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:3c6c:82e8:e0f5:62b0]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:78cf:2433:353d:4df7:c53f]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:953c:1c57:316c:cbd7:97f2]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:18ba:2dd1:876c:3cd2]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:c9f:fbff:2b33:71d5]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:78cf:102b:c7a9:450e:3ff2]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:105f:3a20:ae1f:a4b5]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:1c96:519:6e7b:866b]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6ab8:1cde:38be:9d1d:ad61]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:8b5:ae4:ab1d:1e7d]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:347b:1d47:9fc4:dee0]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:485:383a:b1ac:9aac]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:c3b:3817:8e5c:f3e4]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:24d1:3897:b821:ab0d]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:8cf:3da1:bb97:e485]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:2c29:3099:e7cd:b27c]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2601:2c7:8a80:58c0:bc9c:977c:62c1:7ea2]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:4137:9e76:342e:1adf:b662:9eac]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:24d1:139d:b6bd:7406]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:953c:24c0:157a:5d30:1a7a]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6ab8:28e7:84d:47d0:637]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:3804:2509:d1f6:c676]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:3014:2054:b358:34f9]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:843:662:9c93:db07]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:953c:34d2:ba9:acde:6015]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:953c:1414:9a9:b6c6:3a2f]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:90d7:2c7e:4c5:92bc:bb3b]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:e2:2d32:ad7f:79]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6abd:817:2fb6:fe84:ea6b]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=118.43.97.181:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2405:9800:ba30:55e8:e068:9a0d:6b4f:5f8e]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:308f:3b1:b3bc:5e32]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:9d38:6ab8:10a1:943:e7f3:32a]:10024");\
mapMultiArgs["-addnode"].push_back("addnode=[2001:0:5ef5:79fb:1413:1cd5:b4b7:b55a]:10024");\
LogPrintf("Done loading extra peers.\n");\
} while (false)
