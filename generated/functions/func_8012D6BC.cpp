#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012D6BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;

    goto loc_8012D6BC;

loc_8012D6BC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -27040), 0, 48u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -27024));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 128));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8012D6DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012D6EC;
    }
}

loc_8012D6E0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -27020));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012D6E8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012D6F4;
    }
}

loc_8012D6EC:
{
    r3 = 0;
    goto loc_8012D8A0;
}

loc_8012D6F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 132));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -27036));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8012D700:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012D710;
    }
}

loc_8012D704:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -27016));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012D70C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012D718;
    }
}

loc_8012D710:
{
    r3 = 0;
    goto loc_8012D8A0;
}

loc_8012D718:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 136));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8012D720:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012D730;
    }
}

loc_8012D724:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -27012));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012D72C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012D738;
    }
}

loc_8012D730:
{
    r3 = 0;
    goto loc_8012D8A0;
}

loc_8012D738:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 140));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8012D740:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012D750;
    }
}

loc_8012D744:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012D748:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012D758;
    }
}

loc_8012D750:
{
    r3 = 0;
    goto loc_8012D8A0;
}

loc_8012D758:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 152));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8012D760:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012D76C;
    }
}

loc_8012D764:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012D768:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012D774;
    }
}

loc_8012D76C:
{
    r3 = 0;
    goto loc_8012D8A0;
}

loc_8012D774:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 156));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8012D77C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012D788;
    }
}

loc_8012D780:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012D784:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012D790;
    }
}

loc_8012D788:
{
    r3 = 0;
    goto loc_8012D8A0;
}

loc_8012D790:
{
    // inline leaf 0x8012E50C (3 guest instruction(s))
    r3 = 0x80280000u;
    r3 = (r3 + 7328);
    // end of inlined leaf 0x8012E50C
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -27040));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 128));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 132));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 32), 0, 92u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 32), r3);
    f6.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f6.d, f1.d);
}

loc_8012D7B0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012D7D0;
    }
}

loc_8012D7B8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -27016));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -27036));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f1.d));
    SetCRFloatResident(cr, 0, f6.d, f0.d);
}

loc_8012D7C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012D7D0;
    }
}

loc_8012D7CC:
{
    f6.d = f0.d;
}

loc_8012D7D0:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 136));
    r4 = 0;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -27000));
    r0 = -1;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -27004));
    r3 = 1;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -26996));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -27008));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r31 + 56), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r31 + 48), r4);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r31 + 52), r4);
    }
    f7.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -27036));
    f1.d = PpcFmulsInline(f4.d, f3.d);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r31 + 60), r4);
    f4.d = PpcFmulsInline(f5.d, f6.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f7.d));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r31 + 64), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f3.d = PpcFmulsInline(f5.d, f1.d);
    f2.d = PpcFmulsInline(f5.d, f7.d);
    f1.d = PpcFmulsInline(f5.d, f6.d);
    f4.d = PPC_Fctiwz(f4.d);
    f3.d = PPC_Fctiwz(f3.d);
    f2.d = PPC_Fctiwz(f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f4.d);
    fctiwzword1 = PPC_FprLowWordInline(f3.d);
    r7 = fctiwzword0;
    fctiwzword2 = PPC_FprLowWordInline(f2.d);
    r6 = fctiwzword1;
    fctiwzword3 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword2;
    r0 = fctiwzword3;
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 44), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 36), r6);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 40), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r31 + 68), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 72), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r31 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r31 + 80), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r31 + 84), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r31 + 88), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r31 + 92), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r31 + 96), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r31 + 100), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r31 + 104), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r31 + 108), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r31 + 112), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r31 + 116), f0.d);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r31 + 120), r4);
    }
}

loc_8012D8A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800000FF gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012D6BC func_8012D6BC preserves=true fpr_mask=0x00000000
