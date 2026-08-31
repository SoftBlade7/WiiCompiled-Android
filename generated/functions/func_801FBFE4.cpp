#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FBFE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FBFE4;

loc_801FBFE4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r8;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r7;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r9 = MemoryInline::FlatRead32((r3 + 4));
    r31 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead32(r9);
    r8 = MemoryInline::FlatRead32((r31 + 28));
}

loc_801FC028:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801FC08C;
    }
}

loc_801FC02C:
{
}

loc_801FC030:
{
    if ((static_cast<uint32_t>(r8) > static_cast<uint32_t>(1))) {
        goto loc_801FC08C;
    }
}

loc_801FC034:
{
}

loc_801FC038:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801FC04C;
    }
}

loc_801FC03C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(1));
}

loc_801FC040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC04C;
    }
}

loc_801FC044:
{
    r3 = 12;
    goto loc_801FC078;
}

loc_801FC04C:
{
    r0 = MemoryInline::FlatRead16((r31 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801FC054:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FC068;
    }
}

loc_801FC058:
{
    r0 = -1;
    r3 = 0;
    MemoryInline::FlatWrite32(r7, r0);
    goto loc_801FC078;
}

loc_801FC068:
{
    r0 = MemoryInline::FlatRead32((r31 + 44));
    r3 = 0;
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32(r7, r0);
}

loc_801FC078:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r3 & r0);
    goto loc_801FC17C;
}

loc_801FC08C:
{
    r9 = MemoryInline::FlatRead8((r31 + 33));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
}

loc_801FC094:
{
    r4 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FC10C;
    }
}

loc_801FC09C:
{
    r5 = MemoryInline::FlatRead16(r31);
    r8 = MemoryInline::FlatRead8((r31 + 32));
    r0 = (r5 + -1);
    r5 = MemoryInline::FlatRead8((r31 + 6));
    r7 = (r6 & r0);
    r8 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r8));
    r6 = (0 - r7);
    r0 = (r5 + -1);
    r5 = (r6 | r7);
    r7 = (r1 + 8);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r6 = (r1 + 12);
    r8 = (r8 + r5);
    r5 = (r0 & r8);
    r0 = (0 - r5);
    r8 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r9));
    r0 = (r0 | r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r5 = (r8 + r0);
    ctx->lr = 0x801FC0ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801FBECCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FC0F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC0F8;
    }
}

loc_801FC0F4:
{
    goto loc_801FC17C;
}

loc_801FC0F8:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8((r31 + 33));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_801FC130;
}

loc_801FC10C:
{
    r6 = (r1 + 12);
    ctx->lr = 0x801FC114u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801FBD4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FC118:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC120;
    }
}

loc_801FC11C:
{
    goto loc_801FC17C;
}

loc_801FC120:
{
    r0 = MemoryInline::FlatRead8((r31 + 33));
    r3 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32(r30, r0);
}

loc_801FC130:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FC13C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FC150;
    }
}

loc_801FC140:
{
    r0 = -1;
    r3 = 0;
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_801FC17C;
}

loc_801FC150:
{
    r4 = MemoryInline::FlatRead8((r31 + 6));
    r6 = (r3 + -2);
    r5 = MemoryInline::FlatRead8((r31 + 33));
    r3 = 0;
    r0 = (r4 + -1);
    r7 = MemoryInline::FlatRead32((r31 + 48));
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r4 = (r28 & r0);
    r0 = (r7 + r5);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r29, r0);
}

loc_801FC17C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FBFE4 func_801FBFE4 preserves=true fpr_mask=0x00000000
