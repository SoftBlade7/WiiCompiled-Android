#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D492C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D492C;

loc_807D492C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead8((r4 + 325));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D494C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D495C;
    }
}

loc_807D4950:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 1660));
    f0.d = std::fabs(f0.d);
    goto loc_807D4964;
}

loc_807D495C:
{
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 29888));
}

loc_807D4964:
{
    MemoryInline::FlatWriteFloat32((r3 + 1004), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f3.d = MemoryInline::FlatReadFloat32(r3);
    r6 = 0x802A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 1012), 0, 120u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 1024), f3.d);
    r4 = 0x808A0000u;
    r5 = (r6 + 16640);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 29696));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r0 = 0;
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 1028), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 1032), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r31 + 1012), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r31 + 1016), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 1020), f1.d);
    guest_range_1 = MemoryInline::ResolveRangeHost((r6 + 16640), 0, 12u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r6 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 1048), f3.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 1052), f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 1056), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 1036), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 1040), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 1044), f1.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r6 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r31 + 1072), f3.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r31 + 1076), f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r31 + 1080), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 1060), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 1064), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r31 + 1068), f1.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r6 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r31 + 1096), f3.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r31 + 1100), f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r31 + 1104), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r31 + 1084), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r31 + 1088), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r31 + 1092), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r31 + 1112), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r31 + 1108), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r31 + 1120), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r31 + 1116), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r31 + 1128), r0);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r31 + 1124), r0);
    }
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001A gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D492C func_807D492C preserves=true fpr_mask=0x00000000
