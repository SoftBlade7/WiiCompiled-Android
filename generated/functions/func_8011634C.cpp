#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011634C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8011634C;

loc_8011634C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 292));
    r0 = MemoryInline::FlatRead32((r3 + 296));
    r6 = (r6 + r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_80116374:
{
    MemoryInline::FlatWrite32((r3 + 292), r6);
    r6 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011638C;
    }
}

loc_80116380:
{
    r0 = MemoryInline::FlatRead32((r3 + 340));
}

loc_80116388:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80116394;
    }
}

loc_8011638C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 288), r0);
}

loc_80116394:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011639C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801163C4;
    }
}

loc_801163A0:
{
    r3 = (r3 + 228);
    ctx->lr = 0x801163A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80111850u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801163AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801163B8;
    }
}

loc_801163B0:
{
    r3 = 0;
    goto loc_8011641C;
}

loc_801163B8:
{
    r6 = MemoryInline::FlatRead32((r31 + 232));
    r7 = MemoryInline::FlatRead32((r31 + 240));
    goto loc_80116408;
}

loc_801163C4:
{
}

loc_801163C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801163F8;
    }
}

loc_801163CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801163D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801163EC;
    }
}

loc_801163D4:
{
    r4 = 1;
    r0 = 13;
    MemoryInline::FlatWrite32((r3 + 288), r4);
    MemoryInline::FlatWrite32((r3 + 60), r0);
    r3 = 0;
    goto loc_8011641C;
}

loc_801163EC:
{
    r6 = r4;
    r7 = r5;
    goto loc_80116408;
}

loc_801163F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801163FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80116408;
    }
}

loc_80116400:
{
    r6 = r4;
    r7 = r5;
}

loc_80116408:
{
    r3 = r31;
    r4 = r6;
    r5 = r7;
    ctx->lr = 0x80116418u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80111F94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
}

loc_8011641C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xF8001BFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8011634C func_8011634C preserves=true fpr_mask=0x00000000
