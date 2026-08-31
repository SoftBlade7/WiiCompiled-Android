#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80612A90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80612A90;

loc_80612A90:
{
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80612A98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80612AD0;
    }
}

loc_80612A9C:
{
    r0 = (r4 + -6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80612AA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80612ADC;
    }
}

loc_80612AA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80612AAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80612AC4;
    }
}

loc_80612AB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_80612AB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80612ADC;
    }
}

loc_80612AB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_80612ABC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80612AE8;
    }
}

loc_80612AC0:
{
    goto loc_80612AF4;
}

loc_80612AC4:
{
    r3 = (r3 + 131072);
    r3 = (r3 + -16224);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80612AD0:
{
    r3 = (r3 + 131072);
    r3 = (r3 + -15848);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80612ADC:
{
    r3 = (r3 + 131072);
    r3 = (r3 + -15472);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80612AE8:
{
    r3 = (r3 + 131072);
    r3 = (r3 + -15096);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80612AF4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80612A90 func_80612A90 preserves=true fpr_mask=0x00000000
