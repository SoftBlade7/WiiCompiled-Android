#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013A31C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013A31C;

loc_8013A31C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r7 = 0x80330000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = (r7 + 25208);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r7 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8013A348:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013A370;
    }
}

loc_8013A34C:
{
    r3 = 851968;
    r4 = 0x80280000u;
    r6 = MemoryInline::FlatRead8((r7 + 10173));
    r5 = r30;
    r8 = MemoryInline::FlatRead8((r7 + 10174));
    r7 = r31;
    r3 = (r3 + 2);
    r4 = (r4 + 14656);
    ctx->lr = 0x8013A370u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801317A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8013A370:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r4 = MemoryInline::FlatRead8((r3 + 1605));
    r0 = (r4 & 8);
}

loc_8013A380:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013A3A0;
    }
}

loc_8013A384:
{
    r0 = MemoryInline::FlatRead8((r3 + 1604));
    r0 = (r0 & 16);
}

loc_8013A38C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013A3A0;
    }
}

loc_8013A390:
{
    r0 = (r4 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013A394:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013A3A0;
    }
}

loc_8013A398:
{
    r3 = 4;
    goto loc_8013A3F4;
}

loc_8013A3A0:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 10173));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_8013A3B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013A3C0;
    }
}

loc_8013A3B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 10174));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_8013A3BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013A3F0;
    }
}

loc_8013A3C0:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x8013A3CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80146790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013A3D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013A3E8;
    }
}

loc_8013A3D4:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    MemoryInline::FlatWriteRam8((r3 + 10173), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam8((r3 + 10174), static_cast<uint8_t>(r31));
    goto loc_8013A3F0;
}

loc_8013A3E8:
{
    r3 = 3;
    goto loc_8013A3F4;
}

loc_8013A3F0:
{
    r3 = 0;
}

loc_8013A3F4:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8013A31C func_8013A31C preserves=true fpr_mask=0x00000000
