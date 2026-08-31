#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807459E4(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807459E4;

loc_807459E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808D0000u;
    r31 = (r31 + -18696);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 11192);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x80745A20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8071BE1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 60));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8071C188u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 60));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8071C188u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32(r30);
}

loc_80745A48:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 8), r0);
    MemoryInline::FlatWrite32((r28 + 12), r0);
    MemoryInline::FlatWrite8((r28 + 16), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 17), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r28 + 20), f0.d);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80745A6C;
    }
}

loc_80745A64:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    goto loc_80745A70;
}

loc_80745A6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
}

loc_80745A70:
{
}

loc_80745A74:
{
    MemoryInline::FlatWriteFloat32((r28 + 88), f0.d);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80745A84;
    }
}

loc_80745A7C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    goto loc_80745A88;
}

loc_80745A84:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
}

loc_80745A88:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
}

loc_80745A90:
{
    MemoryInline::FlatWriteFloat32((r28 + 92), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 108), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 104), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 116), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 112), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 124), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 120), f0.d);
    r3 = MemoryInline::FlatRead16((r31 + 10));
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80745AB8;
    }
}

loc_80745AB4:
{
    r3 = MemoryInline::FlatRead16((r31 + 12));
}

loc_80745AB8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r28 + 128), static_cast<uint16_t>(r3));
    r6 = 0x802A0000u;
    r4 = 0x802A0000u;
    MemoryInline::FlatWrite8((r28 + 130), static_cast<uint8_t>(r29));
    r5 = (r6 + 16640);
    r3 = (r4 + 16664);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80745AD8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 24), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r28 + 132), r0);
    f1.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r28 + 136), r0);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r28 + 140), r0);
    f4.d = MemoryInline::FlatReadFloat32((r6 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r28 + 36), f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r28 + 40), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r28 + 44), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r28 + 24), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r28 + 28), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r28 + 32), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16664));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r28 + 48), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r28 + 52), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r28 + 56), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r28 + 60), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r28 + 64), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80745B48;
    }
}

loc_80745B34:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
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
    cr = ctx->cr;
    goto loc_80745B58;
}

loc_80745B48:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
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
    cr = ctx->cr;
}

loc_80745B58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80745B5C:
{
    MemoryInline::FlatWriteFloat32((r28 + 96), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80745B78;
    }
}

loc_80745B64:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    goto loc_80745B88;
}

loc_80745B78:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80745B88:
{
    f4.d = MemoryInline::FlatReadFloat32((r28 + 96));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f2.d = (-(f4.d));
    guest_range_1 = MemoryInline::ResolveRangeHost((r28 + 68), 0, 60u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r28 + 100), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r28 + 68), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r28 + 72), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r28 + 76), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r28 + 80), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r28 + 112), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r28 + 116), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r28 + 120), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r28 + 124), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r28 + 84), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007F gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807459E4 func_807459E4 preserves=true fpr_mask=0x00000000
