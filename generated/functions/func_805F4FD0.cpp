#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F4FD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805F4FD0;

loc_805F4FD0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x805F4FE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->xer = xer;
    InvokeDirectCpu<0x8060197Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r4 = 0x808C0000u;
    r3 = (r31 + 68);
    r4 = (r4 + -25600);
    MemoryInline::FlatWrite32(r31, r4);
    // inline leaf 0x805EEB68 (9 guest instruction(s))
    r4 = 0x808C0000u;
    r0 = 0;
    r4 = (r4 + -25960);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805EEB68
    r4 = 0x80890000u;
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 24728));
    r7 = (r31 + 160);
    r4 = (r31 + 6628);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24732));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 132), static_cast<uint8_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_805F5020:
{
    MemoryInline::FlatWriteFloat32((r31 + 148), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 152), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 156), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F51A8;
    }
}

loc_805F5030:
{
    r5 = (r31 + 160);
    r3 = 715849728;
    r8 = (r4 - r5);
    r6 = (r31 + 6532);
    r9 = (r8 + 11);
    r0 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r9))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r10 = (r0 + r3);
    r11 = (r10 + 1);
}

loc_805F5060:
{
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(8))) {
        goto loc_805F5164;
    }
}

loc_805F5064:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_805F5068:
{
    r3 = 0;
    r4 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F5098;
    }
}

loc_805F5074:
{
    r0 = (r8 & -2147483648);
}

loc_805F5078:
{
    r5 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805F508C;
    }
}

loc_805F5080:
{
    r0 = (r9 & -2147483648);
}

loc_805F5084:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F508C;
    }
}

loc_805F5088:
{
    r5 = 0;
}

loc_805F508C:
{
}

loc_805F5090:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805F5098;
    }
}

loc_805F5094:
{
    r4 = 1;
}

loc_805F5098:
{
}

loc_805F509C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805F50C8;
    }
}

loc_805F50A0:
{
    r5 = (r10 & -2147483648);
}

loc_805F50A4:
{
    r4 = 1;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_805F50BC;
    }
}

loc_805F50AC:
{
    r0 = (r11 & -2147483648);
}

loc_805F50B4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_805F50BC;
    }
}

loc_805F50B8:
{
    r4 = 0;
}

loc_805F50BC:
{
}

loc_805F50C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805F50C8;
    }
}

loc_805F50C4:
{
    r3 = 1;
}

loc_805F50C8:
{
}

loc_805F50CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805F5164;
    }
}

loc_805F50D0:
{
    r3 = (r6 + 95);
    r5 = 0x80890000u;
    r3 = (r3 - r7);
    r0 = 96;
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 24728));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24732));
    ctr = r3;
}

loc_805F50F8:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r6))) {
        goto loc_805F5164;
    }
}

loc_805F50FC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 96u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r7, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r7 + 4), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r7 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r7 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r7 + 16), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r7 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r7 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r7 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r7 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r7 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r7 + 40), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r7 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r7 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r7 + 52), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r7 + 56), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r7 + 60), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r7 + 64), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r7 + 68), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r7 + 72), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r7 + 76), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r7 + 80), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r7 + 84), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r7 + 88), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r7 + 92), f0.d);
    }
    r7 = (r7 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805F50FC;
    }
}

loc_805F5164:
{
    r4 = (r31 + 6628);
    r6 = 0x80890000u;
    r3 = (r4 + 11);
    r5 = 0x80890000u;
    r3 = (r3 - r7);
    r0 = 12;
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 24728));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 24732));
    ctr = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_805F5190:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F51A8;
    }
}

loc_805F5194:
{
    MemoryInline::FlatWriteFloat32(r7, f1.d);
    MemoryInline::FlatWriteFloat32((r7 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r7 + 8), f0.d);
    r7 = (r7 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805F5194;
    }
}

loc_805F51A8:
{
    r3 = (r31 + 148);
    ctx->lr = 0x805F51B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F5FFCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0000FFB gpr_write=0xC0000FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805F4FD0 func_805F4FD0 preserves=true fpr_mask=0x00000000
