#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023E748(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023E748;

loc_8023E748:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    // inline leaf 0x8023E724 (6 guest instruction(s))
    r4 = 0x802A0000u;
    r0 = 1;
    r4 = (r4 + 16160);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r4);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8023E724
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24400));
    r3 = 0x802A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24396));
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24392));
    r3 = (r3 + 16176);
    r0 = 3;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 4), r3);
    r3 = 80;
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r31 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r31 + 9), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 12), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 20), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 24), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 28), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 32), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 36), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 40), f0.d);
    }
    r0 = MemoryInline::FlatRead8((r2 + -24404));
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r31 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r2 + -24403));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r31 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r2 + -24402));
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r31 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r2 + -24401));
    MemoryInline::WriteResolved8(guest_range_0, 47u, (r31 + 47), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r31 + 56), r4);
    ctx->lr = 0x8023E7D0u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023E7D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023E7DC;
    }
}

loc_8023E7D8:
{
    ctx->lr = 0x8023E7DCu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80236250u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8023E7DC:
{
    MemoryInline::FlatWrite32((r31 + 48), r3);
    r3 = 112;
    ctx->lr = 0x8023E7E8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023E7EC:
{
    r5 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023E7FC;
    }
}

loc_8023E7F4:
{
    ctx->lr = 0x8023E7F8u;
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
    InvokeDirectCpu<0x802351F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r5 = r3;
}

loc_8023E7FC:
{
    MemoryInline::FlatWrite32((r31 + 52), r5);
    r4 = 2;
    r0 = 4;
    r3 = r31;
    MemoryInline::FlatWrite32(r5, r4);
    r4 = MemoryInline::FlatRead32((r31 + 52));
    MemoryInline::FlatWrite8((r4 + 48), static_cast<uint8_t>(r0));
    r6 = MemoryInline::FlatRead8((r2 + -24407));
    r5 = MemoryInline::FlatRead8((r2 + -24406));
    r0 = MemoryInline::FlatRead8((r2 + -24405));
    r7 = MemoryInline::FlatRead8((r2 + -24408));
    r4 = MemoryInline::FlatRead32((r31 + 52));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 49), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r4 + 50), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r4 + 51), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r4 + 52), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r31 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    MemoryInline::FlatWriteFloat32((r4 + 60), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8023E748 func_8023E748 preserves=true fpr_mask=0x00000000
