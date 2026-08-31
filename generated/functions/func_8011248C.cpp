#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011248C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8011248C;

loc_8011248C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 404));
}

loc_801124BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80112530;
    }
}

loc_801124C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 416));
}

loc_801124C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80112530;
    }
}

loc_801124CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 420));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801124D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112530;
    }
}

loc_801124D8:
{
    r3 = (r3 + 84);
    ctx->lr = 0x801124E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801119C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801124E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801124F0;
    }
}

loc_801124E8:
{
    r3 = 0;
    goto loc_801125AC;
}

loc_801124F0:
{
    r3 = r29;
    ctx->lr = 0x801124F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80111DE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801124FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112508;
    }
}

loc_80112500:
{
    r3 = 0;
    goto loc_801125AC;
}

loc_80112508:
{
    r3 = MemoryInline::FlatRead32((r29 + 100));
    r0 = MemoryInline::FlatRead32((r29 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80112514:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80112528;
    }
}

loc_80112518:
{
    r3 = (r29 + 84);
    // inline leaf 0x80111DC4 (9 guest instruction(s))
}

loc_inl0_0x80111DC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80111DD4:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80111DDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    goto loc_inl0_cont_80111DC4;
}

loc_inl0_return:
{
}

loc_inl0_cont_80111DC4:
{
    // end of inlined leaf 0x80111DC4
    r3 = 1;
    goto loc_801125AC;
}

loc_80112528:
{
    r3 = 2;
    goto loc_801125AC;
}

loc_80112530:
{
    r4 = MemoryInline::FlatRead32((r3 + 100));
    r0 = MemoryInline::FlatRead32((r3 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8011253C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80112588;
    }
}

loc_80112540:
{
    r3 = r29;
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x80112550u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80112348u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_80112554:
{
    r6 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011256C;
    }
}

loc_8011255C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80112578;
    }
}

loc_80112560:
{
}

loc_80112564:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-2))) {
        goto loc_80112574;
    }
}

loc_80112568:
{
    goto loc_80112578;
}

loc_8011256C:
{
    r3 = 0;
    goto loc_801125AC;
}

loc_80112574:
{
    r6 = 0;
}

loc_80112578:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r31));
}

loc_8011257C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80112588;
    }
}

loc_80112580:
{
    r3 = 1;
    goto loc_801125AC;
}

loc_80112588:
{
    r3 = (r29 + 84);
    r4 = (r30 + r6);
    r5 = (r31 - r6);
    ctx->lr = 0x80112598u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80111850u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011259C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801125A8;
    }
}

loc_801125A0:
{
    r3 = 0;
    goto loc_801125AC;
}

loc_801125A8:
{
    r3 = 2;
}

loc_801125AC:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8011248C func_8011248C preserves=true fpr_mask=0x00000000
