#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B8330(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805B8330;

loc_805B8330:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = (r3 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x805B821Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = 0x80890000u;
    r6 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 10152));
    r4 = 0;
    goto loc_805B83B4;
}

loc_805B8360:
{
    r3 = (r6 & 65535);
    r0 = MemoryInline::FlatRead32((r31 + 140));
    r5 = (r3 * 48);
    r6 = (r6 + 1);
    r3 = (r0 + r5);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 8), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 20), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 16), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 28), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 24), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 40), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 36), f1.d);
    r0 = MemoryInline::FlatRead32((r31 + 140));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 148));
    r5_addr_2 = (r5 + r0);
    r3 = MemoryInline::FlatRead32(r5_addr_2);
    r5 = r5_addr_2;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
}

loc_805B83B4:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r6 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_805B83C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805B8360;
    }
}

loc_805B83C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000005A gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000006 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B8330 func_805B8330 preserves=true fpr_mask=0x00000000
