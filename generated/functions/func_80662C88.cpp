#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80662C88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80662C88;

loc_80662C88:
{
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80662C90:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_80662C9C;
    }
}

loc_80662C94:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80662C9C:
{
    r4 = 0x809C0000u;
    r0 = 1;
    r5 = MemoryInline::FlatRead32((r4 + 8408));
    r4 = MemoryInline::FlatRead32((r5 + 10524));
    r4 = (r4 * 88);
    r4 = (r5 + r4);
    r5 = MemoryInline::FlatRead8((r4 + 89));
    r4 = MemoryInline::FlatRead32((r4 + 72));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r4 = (r4 & ~r0);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80662CC8:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80662D18;
    }
}

loc_80662CCC:
{
    r0 = MemoryInline::FlatRead32((r3 + 2528));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80662CE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80662D10;
    }
}

loc_80662CE4:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_80662CF0;
    }
}

loc_80662CE8:
{
    r0 = 0;
    goto loc_80662D10;
}

loc_80662CF0:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80662D0C;
    }
}

loc_80662CF4:
{
    r0 = MemoryInline::FlatRead32((r3 + 2532));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    goto loc_80662D10;
}

loc_80662D0C:
{
    r0 = 0;
}

loc_80662D10:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80662D18:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x43 cr_write=0x43 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80662C88 func_80662C88 preserves=true fpr_mask=0x00000000
