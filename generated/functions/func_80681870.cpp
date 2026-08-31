#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80681870(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80681870;

loc_80681870:
{
    r4 = 0x808A0000u;
    r5 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + -11528));
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r8 = 1127219200;
    f0.d = MemoryInline::FlatReadFloat32((r5 + -11536));
    goto loc_80681938;
}

loc_80681890:
{
    r12 = 0;
    goto loc_80681924;
}

loc_80681898:
{
    r7 = MemoryInline::FlatRead32((r3 + 192));
    r0 = (r0 * r4);
    r5 = MemoryInline::FlatRead32((r3 + 224));
    r11 = MemoryInline::FlatRead32((r3 + 196));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r6 = (r6_rot_3 & 1);
    r9 = MemoryInline::FlatRead32((r3 + 228));
    r7 = (r6 + r7);
    r6 = (r5 * r12);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r10 = (r10_rot_3 & 1);
    r0 = (r12 + r0);
    MemoryInline::FlatWriteRam32((r1 + 32), r8);
    r10 = (r10 + r11);
    r5 = MemoryInline::FlatRead32((r3 + 172));
    r10 = (static_cast<int32_t>(r10) >> 1);
    MemoryInline::FlatWriteRam32((r1 + 24), r8);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r7) >> 1);
    r12 = (r12 + 1);
    r6 = (r6 - r7);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r6 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r6);
    r9 = (r9 * r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r0 = (r0 * 12);
    r6 = (r9 - r10);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    r6 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r6);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r5 = (r5 + r0);
    MemoryInline::FlatWriteFloat32(r5, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 8), f1.d);
}

loc_80681924:
{
    r5 = MemoryInline::FlatRead32((r3 + 216));
    r0 = (r5 + 1);
}

loc_80681930:
{
    if ((static_cast<int32_t>(r12) < static_cast<int32_t>(r0))) {
        goto loc_80681898;
    }
}

loc_80681934:
{
    r4 = (r4 + 1);
}

loc_80681938:
{
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r0 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80681944:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80681890;
    }
}

loc_80681948:
{
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FF3 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80681870 func_80681870 preserves=true fpr_mask=0x00000000
