#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80591664(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_80591664;

loc_80591664:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    f3.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r5 = (r1 + 8);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r7 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r4 = (r1 + 20);
    r6 = MemoryInline::FlatRead32(r7);
    r6 = MemoryInline::FlatRead32((r6 + 20));
    r6 = MemoryInline::FlatRead32((r6 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 388));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 392));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 396));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r1 + 28), f0.d);
    r6 = MemoryInline::FlatRead32(r7);
    r6 = MemoryInline::FlatRead32((r6 + 20));
    r6 = MemoryInline::FlatRead32((r6 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 400));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r1 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 404));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 408));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 16), f0.d);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x805916FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x805B4E84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0xFC003C00 fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80591664 func_80591664 preserves=true fpr_mask=0x00000000
