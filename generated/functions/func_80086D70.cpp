#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80086D70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80086D70;

loc_80086D70:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = f1.d;
    r8 = 0;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r5 = 0;
    goto loc_80086DC0;
}

loc_80086DA0:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r6 = (r0 + r7);
    r7_addr_2 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_2);
}

loc_80086DB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80086DB8;
    }
}

loc_80086DB4:
{
    MemoryInline::FlatWrite32((r6 + 4), r5);
}

loc_80086DB8:
{
    r7 = (r7 + 12);
    r8 = (r8 + 1);
}

loc_80086DC0:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80086DC8:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r0))) {
        goto loc_80086DA0;
    }
}

loc_80086DCC:
{
    r0 = MemoryInline::FlatRead8((r3 + 25));
}

loc_80086DD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80086E54;
    }
}

loc_80086DD8:
{
}

loc_80086DDC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80086DFC;
    }
}

loc_80086DE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28856));
    r5 = 1;
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::FlatWrite8((r3 + 26), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r0));
    goto loc_80086E4C;
}

loc_80086DFC:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80086E04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80086E14;
    }
}

loc_80086E08:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    goto loc_80086E18;
}

loc_80086E14:
{
    r0 = 0;
}

loc_80086E18:
{
    r6 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = 1;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -28848));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28852));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWrite8((r3 + 26), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_80086E4C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r0));
}

loc_80086E54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80086E58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80086E6C;
    }
}

loc_80086E5C:
{
    f1.d = f31.d;
    r3 = r31;
    ctx->lr = 0x80086E68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80086EA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80086E78;
}

loc_80086E6C:
{
    f1.d = f31.d;
    r3 = r31;
    ctx->lr = 0x80086E78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800870C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80086E78:
{
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r31 + 12), f31.d);
    MemoryInline::FlatWrite8((r31 + 26), static_cast<uint8_t>(r0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80086D70 func_80086D70 preserves=false fpr_mask=0x80000000
