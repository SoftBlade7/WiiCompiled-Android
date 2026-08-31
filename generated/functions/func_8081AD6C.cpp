#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081AD6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8081AD6C;

loc_8081AD6C:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r5 + -10448));
    r6 = MemoryInline::FlatRead32((r3 + 252));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r0 = (r0 - r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_8081ADA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081AEFC;
    }
}

loc_8081ADA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8081ADA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081ADB8;
    }
}

loc_8081ADAC:
{
    ctx->lr = 0x8081ADB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r5 = (r30 + 88);
    goto loc_8081ADCC;
}

loc_8081ADB8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 300));
    ctr = r12;
    ctx->lr = 0x8081ADC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = r3;
}

loc_8081ADCC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    r3 = (r1 + 56);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 56), f0.d);
    r4 = (r1 + 8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r5 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r1 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r1 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r1 + 76), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r5 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r5 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r5 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r1 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r5 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r5 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r5 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r1 + 100), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FABCu>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 172));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 96u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 48u, (r1 + 56));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 96u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r3 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 52u, (r1 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 56u, (r1 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 60u, (r1 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 64u, (r1 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 68u, (r1 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 72u, (r1 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 76u, (r1 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 80u, (r1 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 84u, (r1 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 88u, (r1 + 96));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 92u, (r1 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r3 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r3 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r1 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r3 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r1 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r3 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r3 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r3 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r1 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r3 + 76), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r3 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r1 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r3 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r1 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r3 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r1 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r3 + 96), f0.d);
}

loc_8081AEFC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r30 + 252), r0);
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8081AD6C func_8081AD6C preserves=true fpr_mask=0x00000000
