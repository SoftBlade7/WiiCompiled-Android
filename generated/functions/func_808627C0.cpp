#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808627C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808627C0;

loc_808627C0:
{
    r6 = 0x809C0000u;
    r8 = MemoryInline::FlatRead32((r6 + -10424));
    r0 = MemoryInline::FlatRead16((r8 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808627D0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808627F0;
    }
}

loc_808627D4:
{
    r6 = 65536;
    r7 = (r0 & 255);
    r0 = (r6 + -27664);
    r0 = (r0 * r7);
    r6 = (r8 + r0);
    r6 = (r6 + 56);
    goto loc_808627F4;
}

loc_808627F0:
{
    r6 = 0;
}

loc_808627F4:
{
    r5 = (r5 * 896);
    r0 = (r4 + 1);
    r0 = (r0 - r3);
    r5 = (r6 + r5);
    r6 = (r5 + 32);
    r5 = (r3 * 112);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r4));
}

loc_80862814:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80862844;
    }
}

loc_80862818:
{
    r3 = (r6 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862824:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862834;
    }
}

loc_80862828:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80862830:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086283C;
    }
}

loc_80862834:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8086283C:
{
    r5 = (r5 + 112);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80862818;
    }
}

loc_80862844:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000179 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808627C0 func_808627C0 preserves=true fpr_mask=0x00000000
