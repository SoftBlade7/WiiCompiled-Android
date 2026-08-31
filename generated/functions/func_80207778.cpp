#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80207778(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80207778;

loc_80207778:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020777C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80207788;
    }
}

loc_80207780:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80207788:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = 1;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(114));
}

loc_80207798:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802077B8;
    }
}

loc_8020779C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802077AC;
    }
}

loc_802077A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(97));
}

loc_802077A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802077C8;
    }
}

loc_802077A8:
{
    goto loc_802077D0;
}

loc_802077AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(119));
}

loc_802077B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802077C0;
    }
}

loc_802077B4:
{
    goto loc_802077D0;
}

loc_802077B8:
{
    r4 = 2;
    goto loc_802077D8;
}

loc_802077C0:
{
    r4 = 1;
    goto loc_802077D8;
}

loc_802077C8:
{
    r4 = 4;
    goto loc_802077D8;
}

loc_802077D0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_802077D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_802077E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(98))) {
        goto loc_802077E8;
    }
}

loc_802077E4:
{
    r5 = 2;
}

loc_802077E8:
{
    r3_addr_0 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    r5 = (r5 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(43));
}

loc_802077F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80207828;
    }
}

loc_802077FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8020780C;
    }
}

loc_80207800:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80207804:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80207818;
    }
}

loc_80207808:
{
    goto loc_80207820;
}

loc_8020780C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(116));
}

loc_80207810:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80207820;
    }
}

loc_80207814:
{
    goto loc_80207820;
}

loc_80207818:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80207820:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80207828:
{
    r3_addr_1 = (r3 + r5);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = (r4 | 8);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 1);
    r3 = (0 - r3);
    r3 = (r0 & r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80207778 func_80207778 preserves=true fpr_mask=0x00000000
