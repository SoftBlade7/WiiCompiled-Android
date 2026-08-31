#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CE31C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_807CE31C;

loc_807CE31C:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 776));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 780));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r29 + 784));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 788));
    MemoryInline::FlatWriteFloat32((r29 + 776), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 792));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 796));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r29 + 780), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f1.d = PpcFmulsInline(f5.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 784), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 788), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 792), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 828), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 796), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 824), f0.d);
}

loc_807CE68C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 52), 0, 100u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 76u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 60u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 28u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 12u, (r1 + 64));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 60));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 56));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r1 + 148));
    r29 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0000002 gpr_write=0xE0000003 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0xF800003F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807CE31C func_807CE31C preserves=true fpr_mask=0x00000000
