#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8076C038(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8076C038;

loc_8076C038:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    MemoryInline::FlatWriteRam32((r1 + 8), r28);
    r28 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 192));
}

loc_8076C06C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(0))) {
        goto loc_8076C080;
    }
}

loc_8076C070:
{
    r0 = MemoryInline::FlatRead32((r3 + 184));
}

loc_8076C078:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r0))) {
        goto loc_8076C080;
    }
}

loc_8076C07C:
{
    r4 = 1;
}

loc_8076C080:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8076C084:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8076C098;
    }
}

loc_8076C088:
{
    r3 = (r3 + 180);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8076C098u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8076C098:
{
    r3 = MemoryInline::FlatRead32((r28 + 188));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r29 = 0;
    r28 = 0;
    r3_addr_0 = (r3 + r0);
    r30 = MemoryInline::FlatRead32(r3_addr_0);
    r31 = 1;
    goto loc_8076C10C;
}

loc_8076C0B4:
{
}

loc_8076C0B8:
{
    r3 = 0;
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(0))) {
        goto loc_8076C0D0;
    }
}

loc_8076C0C0:
{
    r0 = MemoryInline::FlatRead32((r30 + 224));
}

loc_8076C0C8:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_8076C0D0;
    }
}

loc_8076C0CC:
{
    r3 = 1;
}

loc_8076C0D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8076C0D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8076C0EC;
    }
}

loc_8076C0D8:
{
    r12 = MemoryInline::FlatRead32((r30 + 220));
    r3 = (r30 + 220);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8076C0ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8076C0EC:
{
    r3 = MemoryInline::FlatRead32((r30 + 228));
    r3_addr_2 = (r3 + r28);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead8((r3 + 289));
}

loc_8076C0FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8076C104;
    }
}

loc_8076C100:
{
    MemoryInline::FlatWrite32((r3 + 176), r31);
}

loc_8076C104:
{
    r28 = (r28 + 4);
    r29 = (r29 + 1);
}

loc_8076C10C:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_8076C114:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8076C0B4;
    }
}

loc_8076C118:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 184), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 208), r0);
    MemoryInline::FlatWriteFloat32((r30 + 216), f31.d);
    MemoryInline::FlatWrite8((r30 + 212), static_cast<uint8_t>(r0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8076C038 func_8076C038 preserves=false fpr_mask=0x80000000
