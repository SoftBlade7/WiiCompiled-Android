#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053B3CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8053B3CC;

loc_8053B3CC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r8 = 0x80010000u;
    r7 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r8 = (r8 + -32767);
    r9 = MemoryInline::FlatRead32((r7 + -10448));
    r7 = 65536;
    r0 = MemoryInline::FlatRead16((r3 + 260));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + -1);
    r9 = MemoryInline::FlatRead32((r9 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053B3FC:
{
    r10 = MemoryInline::FlatRead16((r3 + 276));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r8) * static_cast<uint64_t>(r9)) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_0 & 131071);
    r0 = (r0 * r7);
    r0 = (r9 - r0);
    r0 = (r0 & 65535);
    r7 = (r10 + r0);
    r0 = (r7 + 90);
    r11 = (r0 & 65535);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053B42C;
    }
}

loc_8053B424:
{
    r3 = 0;
    goto loc_8053B4BC;
}

loc_8053B42C:
{
    r0 = 7;
    r10 = 0;
    r8 = 0;
    ctr = r0;
}

loc_8053B43C:
{
    r9 = MemoryInline::FlatRead32((r3 + 64));
    r7 = (r9 + r8);
    r0 = MemoryInline::FlatRead32((r7 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053B44C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053B4AC;
    }
}

loc_8053B450:
{
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r10 = (r10_rot_1 & -8);
    r7 = r5;
    r9 = (r9 + r10);
    r8 = r6;
    MemoryInline::FlatWrite32((r9 + 40), r4);
    r0 = MemoryInline::FlatRead32((r3 + 64));
    r9 = (r0 + r10);
    MemoryInline::FlatWrite16((r9 + 44), static_cast<uint16_t>(r11));
    r0 = MemoryInline::FlatRead32((r3 + 64));
    r9 = (r0 + r10);
    MemoryInline::FlatWrite8((r9 + 46), static_cast<uint8_t>(r5));
    r5 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 64));
    r4 = (r0 + r10);
    MemoryInline::FlatWrite8((r4 + 47), static_cast<uint8_t>(r6));
    r6 = r11;
    r9 = MemoryInline::FlatRead16((r3 + 260));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 68));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8053AA20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 1;
    goto loc_8053B4BC;
}

loc_8053B4AC:
{
    r8 = (r8 + 8);
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053B43C;
    }
}

loc_8053B4B8:
{
    r3 = 0;
}

loc_8053B4BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8053B3CC func_8053B3CC preserves=true fpr_mask=0x00000000
