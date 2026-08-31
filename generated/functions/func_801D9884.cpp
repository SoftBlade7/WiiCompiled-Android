#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D9884(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801D9884;

loc_801D9884:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    ctx->lr = 0x801D98B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D37F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
}

loc_801D98B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D98D0;
    }
}

loc_801D98BC:
{
    r0 = MemoryInline::FlatRead32((r13 + -24416));
    r31 = r29;
    MemoryInline::FlatWrite32((r29 + 32), r0);
    MemoryInline::FlatWrite32((r13 + -24416), r29);
    goto loc_801D9968;
}

loc_801D98D0:
{
    r4 = (r13 + -24416);
    goto loc_801D995C;
}

loc_801D98D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_801D98DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D9924;
    }
}

loc_801D98E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D98F4;
    }
}

loc_801D98E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801D98E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D9900;
    }
}

loc_801D98EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D9910;
    }
}

loc_801D98F0:
{
    goto loc_801D994C;
}

loc_801D98F4:
{
}

loc_801D98F8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(4))) {
        goto loc_801D9938;
    }
}

loc_801D98FC:
{
    goto loc_801D994C;
}

loc_801D9900:
{
}

loc_801D9904:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_801D994C;
    }
}

loc_801D9908:
{
    r31 = r3;
    goto loc_801D994C;
}

loc_801D9910:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_801D9918:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r29))) {
        goto loc_801D994C;
    }
}

loc_801D991C:
{
    r31 = r3;
    goto loc_801D994C;
}

loc_801D9924:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_801D992C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r29))) {
        goto loc_801D994C;
    }
}

loc_801D9930:
{
    r31 = r3;
    goto loc_801D994C;
}

loc_801D9938:
{
}

loc_801D993C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_801D994C;
    }
}

loc_801D9940:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r31 = r3;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_801D994C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801D9950:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D9968;
    }
}

loc_801D9954:
{
    r3 = MemoryInline::FlatRead32(r4);
    r4 = (r3 + 32);
}

loc_801D995C:
{
    r3 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D9964:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D98D8;
    }
}

loc_801D9968:
{
    r3 = r28;
    ctx->lr = 0x801D9970u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D37F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801D9884 func_801D9884 preserves=true fpr_mask=0x00000000
