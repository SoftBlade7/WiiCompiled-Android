#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FB39C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_807FB39C;

loc_807FB39C:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r9 = 0x808B0000u;
    r9 = (r9 + -21672);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r7 = 0x809C0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r9 + 24), 0, 48u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r9 + 64));
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r5;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r9 + 24));
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r3;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r9 + 28));
    r8 = MemoryInline::FlatRead32((r7 + -10448));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r8 = MemoryInline::FlatRead32((r8 + 32));
    r7 = MemoryInline::FlatRead32((r4 + 16));
    r5 = (r8 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r7 = MemoryInline::FlatRead32((r4 + 8));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r9 + 32));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r9 + 36));
        }
    }
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f6.d, f0.d);
}

loc_807FB43C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FB444;
    }
}

loc_807FB440:
{
    goto loc_807FB448;
}

loc_807FB444:
{
    f6.d = f0.d;
}

loc_807FB448:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r9 + 44));
    r4 = (r8 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f2.d = PpcFmulsInline(f0.d, f4.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r9 + 40));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r4 = 0x808D0000u;
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r9 + 64));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 188));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 17052));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r9 + 48));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = PpcFmulsInline(f31.d, f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
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
    r3 = 0x808D0000u;
    f3.d = MemoryInline::FlatReadFloat32((r29 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17048));
    r4 = 0x802A0000u;
    f4.d = MemoryInline::FlatReadFloat32((r29 + 52));
    r3 = (r4 + 16688);
    f2.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f5.d = MemoryInline::FlatReadFloat32((r29 + 48));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    MemoryInline::FlatWriteFloat32((r30 + 8), f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000037E gpr_write=0xE00003BB gpr_return=0x00000018 fpr_read=0x80000051 fpr_write=0x8000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FB39C func_807FB39C preserves=false fpr_mask=0x80000000
