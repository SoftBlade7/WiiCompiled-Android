#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020A338(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020A338;

loc_8020A338:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_8020A364:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8020A380;
    }
}

loc_8020A368:
{
    r4 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_8020A370:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8020A380;
    }
}

loc_8020A374:
{
    r0 = (r3 * 320);
    r3 = (r4 + r0);
    goto loc_8020A384;
}

loc_8020A380:
{
    r3 = 0;
}

loc_8020A384:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020A388:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A3C4;
    }
}

loc_8020A38C:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->lr = 0x8020A398u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x802064E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020A39C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A3AC;
    }
}

loc_8020A3A0:
{
    ctx->lr = 0x8020A3A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80206244u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = 0;
    goto loc_8020A3CC;
}

loc_8020A3AC:
{
    ctx->lr = 0x8020A3B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802079F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8020A3B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8020A3CC;
    }
}

loc_8020A3B8:
{
    r3 = -1;
    goto loc_8020A3CC;
}

loc_8020A3C4:
{
    r3 = 65536;
    r3 = (r3 + -20477);
}

loc_8020A3CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020A3D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020A44C;
    }
}

loc_8020A3D4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_8020A3DC:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r0))) {
        goto loc_8020A3F8;
    }
}

loc_8020A3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_8020A3E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020A3F8;
    }
}

loc_8020A3EC:
{
    r0 = (r29 * 320);
    r3 = (r3 + r0);
    goto loc_8020A3FC;
}

loc_8020A3F8:
{
    r3 = 0;
}

loc_8020A3FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020A400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A41C;
    }
}

loc_8020A404:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A41C;
    }
}

loc_8020A408:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020A410:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A41C;
    }
}

loc_8020A414:
{
    r4 = 0;
    ctx->lr = 0x8020A41Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020C380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8020A41C:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x8020A428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80207A64u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020A42C:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020A444;
    }
}

loc_8020A434:
{
    ctx->lr = 0x8020A438u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802079F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020A43C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A444;
    }
}

loc_8020A440:
{
    MemoryInline::FlatWrite32((r13 + -24220), r3);
}

loc_8020A444:
{
    r3 = r31;
    goto loc_8020A458;
}

loc_8020A44C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A454;
    }
}

loc_8020A450:
{
    MemoryInline::FlatWrite32((r13 + -24220), r3);
}

loc_8020A454:
{
    r3 = 0;
}

loc_8020A458:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8020A338 func_8020A338 preserves=true fpr_mask=0x00000000
