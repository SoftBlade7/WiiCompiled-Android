#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D73F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801D73F0;

loc_801D73F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    ctx->lr = 0x801D7410u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D9E94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    // inline leaf 0x801D9F08 (2 guest instruction(s))
    r3 = (r3 + 2056);
    // end of inlined leaf 0x801D9F08
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r29 = MemoryInline::FlatRead32((r30 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D7428:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D7430;
    }
}

loc_801D742C:
{
    r29 = (r30 + 224);
}

loc_801D7430:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D743C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D7454;
    }
}

loc_801D7440:
{
    r3 = r29;
    r4 = (r31 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D7450:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D7498;
    }
}

loc_801D7454:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x801D7460u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D5474u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D7464:
{
    MemoryInline::FlatWrite32((r31 + 788), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D74A0;
    }
}

loc_801D746C:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D7474:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D7488;
    }
}

loc_801D7478:
{
    r0 = 12;
    r3 = 0;
    MemoryInline::FlatWrite32((r31 + 816), r0);
    goto loc_801D7528;
}

loc_801D7488:
{
    r0 = 4;
    r3 = 0;
    MemoryInline::FlatWrite32((r31 + 816), r0);
    goto loc_801D7528;
}

loc_801D7498:
{
    r0 = MemoryInline::FlatRead32((r31 + 792));
    MemoryInline::FlatWrite32((r31 + 788), r0);
}

loc_801D74A0:
{
    r3 = (r31 + 4);
    r4 = 256;
    ctx->lr = 0x801D74ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r5 = r3;
    r4 = r29;
    r3 = (r31 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54E8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 32));
    MemoryInline::FlatWrite32((r31 + 796), r0);
    r0 = MemoryInline::FlatRead32((r30 + 12));
}

loc_801D74D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D74E0;
    }
}

loc_801D74D8:
{
    r0 = MemoryInline::FlatRead32((r30 + 480));
    MemoryInline::FlatWrite32((r31 + 796), r0);
}

loc_801D74E0:
{
    r3 = MemoryInline::FlatRead32((r31 + 788));
    r0 = MemoryInline::FlatRead32((r31 + 792));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801D74EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D750C;
    }
}

loc_801D74F0:
{
    r3 = MemoryInline::FlatRead32((r31 + 796));
    r0 = MemoryInline::FlatRead32((r31 + 800));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_801D74FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D750C;
    }
}

loc_801D7500:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801D7508:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D7514;
    }
}

loc_801D750C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 824), r0);
}

loc_801D7514:
{
    r4 = MemoryInline::FlatRead32((r31 + 788));
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r31 + 796));
    MemoryInline::FlatWrite32((r31 + 792), r4);
    MemoryInline::FlatWrite32((r31 + 800), r0);
}

loc_801D7528:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801D73F0 func_801D73F0 preserves=true fpr_mask=0x00000000
