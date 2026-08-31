#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806B39E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_806B39E0;

loc_806B39E0:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + -3880);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r4;
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r3;
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f2.d = PpcFmulsInline(f2.d, f31.d);
    f31.d = f1.d;
    f1.d = PpcFmulsInline(f0.d, f2.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f2.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f3.d = f31.d;
    r3 = (r1 + 32);
    f4.d = f1.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + -12), 0, 28u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    r0 = MemoryInline::FlatRead32(r29);
    r3 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 20), r0);
    r4 = (r1 + 32);
    r6 = MemoryInline::FlatRead32((r29 + 4));
    r5 = (r1 + 20);
    r0 = MemoryInline::FlatRead32((r29 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 24), r6);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 28), r0);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r1 + 20), f0.d);
    ctx->lr = 0x806B3A88u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x805147FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 80u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r1 + 64));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 60));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 56));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001E gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0xC000001A fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806B39E0 func_806B39E0 preserves=false fpr_mask=0x80000000
