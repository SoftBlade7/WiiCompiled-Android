#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FAF10(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_807FAF10;

loc_807FAF10:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r5 = (r4 ^ -2147483648);
    r6 = 0x808B0000u;
    r6 = (r6 + -21672);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 24), 0, 48u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r6 + 64));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r6 + 24));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r6 + 28));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r6 + 32));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r6 + 36));
        }
    }
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    SetCRFloatResident(cr, 0, f6.d, f0.d);
}

loc_807FAF70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FAF78;
    }
}

loc_807FAF74:
{
    goto loc_807FAF7C;
}

loc_807FAF78:
{
    f6.d = f0.d;
}

loc_807FAF7C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r6 + 44));
    r4 = (r4 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r6 + 40));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r4 = 0x808D0000u;
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r6 + 64));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 188));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 17052));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r6 + 48));
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
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17048));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000005E gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x80000043 fpr_write=0x8000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FAF10 func_807FAF10 preserves=false fpr_mask=0x80000000
