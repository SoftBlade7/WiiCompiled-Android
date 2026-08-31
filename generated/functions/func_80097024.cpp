#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80097024(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80097024;

loc_80097024:
{
}

loc_80097028:
{
    r26 = 0;
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_8009703C;
    }
}

loc_80097030:
{
    r0 = (0 - r29);
    r26 = 1;
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8009703C:
{
    // inline leaf 0x800AD050 (9 guest instruction(s))
    r3 = 1638400;
    r4 = MemoryInline::FlatRead32((r13 + -32320));
    r0 = (r3 + 26125);
    r3 = (r4 * r0);
    r3 = (r3 + 1013907456);
    r0 = (r3 + -3233);
    MemoryInline::FlatWrite32((r13 + -32320), r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_0 & 65535);
    // end of inlined leaf 0x800AD050
    r3 = (r3 & 65535);
    r0 = (r29 + 1);
    r3 = (r3 * r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80097050:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 16);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009705C;
    }
}

loc_80097058:
{
    r3 = (0 - r3);
}

loc_8009705C:
{
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r3));
    ctx->gpr[0] = r0;
    ctx->gpr[26] = r26;
    ctx->gpr[29] = r29;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009716Cu>(ctx);
    r0 = ctx->gpr[0];
    r26 = ctx->gpr[26];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[26] = r26;
    ctx->gpr[29] = r29;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x6000200B gpr_write=0xFE00081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80097024 func_80097024 preserves=true fpr_mask=0x00000000
