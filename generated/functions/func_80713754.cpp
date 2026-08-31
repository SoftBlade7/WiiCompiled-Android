#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80713754(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80713754;

loc_80713754:
{
    r6 = MemoryInline::FlatRead8((r3 + 40));
    r0 = (4 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
}

loc_80713764:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80713768:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80713778:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8071379C;
    }
}

loc_8071377C:
{
    MemoryInline::FlatWrite32((r5 + 24), r4);
    r5 = MemoryInline::FlatRead8((r3 + 40));
    r4 = MemoryInline::FlatRead8((r3 + 41));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r0));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8071379C:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80713768;
    }
}

loc_807137A4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80713754 func_80713754 preserves=true fpr_mask=0x00000000
