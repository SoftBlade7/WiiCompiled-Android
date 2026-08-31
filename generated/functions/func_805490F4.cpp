#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805490F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805490F4;

loc_805490F4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805491C8;
    }
}

loc_80549120:
{
    r4 = (r0 * 100);
    r0 = 5;
    r3 = 0;
    r5 = (r30 + r4);
    ctr = r0;
}

loc_80549134:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_8054913C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80549148;
    }
}

loc_80549140:
{
    r0 = 0;
    goto loc_805491B0;
}

loc_80549148:
{
    r0 = MemoryInline::FlatRead8((r5 + 3702));
}

loc_80549150:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8054915C;
    }
}

loc_80549154:
{
    r0 = 1;
    goto loc_805491B0;
}

loc_8054915C:
{
    r0 = MemoryInline::FlatRead16((r5 + 3696));
    r4 = MemoryInline::FlatRead16((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80549168:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80549174;
    }
}

loc_8054916C:
{
    r0 = 1;
    goto loc_805491B0;
}

loc_80549174:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805491AC;
    }
}

loc_80549178:
{
    r0 = MemoryInline::FlatRead8((r5 + 3698));
    r4 = MemoryInline::FlatRead8((r31 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80549184:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80549190;
    }
}

loc_80549188:
{
    r0 = 1;
    goto loc_805491B0;
}

loc_80549190:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805491AC;
    }
}

loc_80549194:
{
    r4 = MemoryInline::FlatRead16((r31 + 8));
    r0 = MemoryInline::FlatRead16((r5 + 3700));
}

loc_805491A0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_805491AC;
    }
}

loc_805491A4:
{
    r0 = 1;
    goto loc_805491B0;
}

loc_805491AC:
{
    r0 = 0;
}

loc_805491B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805491B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805491BC;
    }
}

loc_805491B8:
{
    goto loc_805491CC;
}

loc_805491BC:
{
    r5 = (r5 + 3200);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80549134;
    }
}

loc_805491C8:
{
    r3 = -1;
}

loc_805491CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805490F4 func_805490F4 preserves=true fpr_mask=0x00000000
