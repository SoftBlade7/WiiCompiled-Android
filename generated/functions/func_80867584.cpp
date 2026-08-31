#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80867584(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80867584;

loc_80867584:
{
    r6 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
}

loc_8086758C:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80867598;
    }
}

loc_80867590:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80867598:
{
    r0 = MemoryInline::FlatRead8((r3 + 38));
    r5 = (r6 + r0);
    r0 = (r5 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_808675A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808675B4;
    }
}

loc_808675AC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_808675B4:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_808675C0;
    }
}

loc_808675B8:
{
    r5 = -1;
    goto loc_808675CC;
}

loc_808675C0:
{
    r5 = -1;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_808675CC;
    }
}

loc_808675C8:
{
    r5 = (r4 - r6);
}

loc_808675CC:
{
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000058 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80867584 func_80867584 preserves=true fpr_mask=0x00000000
