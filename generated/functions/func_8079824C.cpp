#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079824C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079824C;

loc_8079824C:
{
    r4 = MemoryInline::FlatRead32((r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(20));
}

loc_80798254:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80798264;
    }
}

loc_80798258:
{
    r0 = MemoryInline::FlatRead32((r3 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16));
}

loc_80798260:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079826C;
    }
}

loc_80798264:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8079826C:
{
    r0 = (r4 * 28);
    r3 = 0x809C0000u;
    r3 = (r3 + 13984);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079824C func_8079824C preserves=true fpr_mask=0x00000000
