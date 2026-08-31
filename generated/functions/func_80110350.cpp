#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80110350(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80110350;

loc_80110350:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8011035C:
{
    r12 = 1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r6 = MemoryInline::FlatRead8((r2 + -27432));
    r11 = MemoryInline::FlatRead8((r2 + -27431));
    r10 = MemoryInline::FlatRead8((r2 + -27430));
    r9 = MemoryInline::FlatRead8((r2 + -27429));
    r8 = MemoryInline::FlatRead8((r2 + -27428));
    r7 = MemoryInline::FlatRead8((r2 + -27427));
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(10))) {
        goto loc_8011041C;
    }
}

loc_80110388:
{
    r0 = MemoryInline::FlatRead8(r4);
    r6 = (r6 & 255);
}

loc_80110394:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_801103A0;
    }
}

loc_80110398:
{
    r12 = 0;
    goto loc_80110420;
}

loc_801103A0:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r6 = (r11 & 255);
}

loc_801103AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_801103B8;
    }
}

loc_801103B0:
{
    r12 = 0;
    goto loc_80110420;
}

loc_801103B8:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r6 = (r10 & 255);
}

loc_801103C4:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_801103D0;
    }
}

loc_801103C8:
{
    r12 = 0;
    goto loc_80110420;
}

loc_801103D0:
{
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r6 = (r9 & 255);
}

loc_801103DC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_801103E8;
    }
}

loc_801103E0:
{
    r12 = 0;
    goto loc_80110420;
}

loc_801103E8:
{
    r0 = MemoryInline::FlatRead8((r4 + 4));
    r6 = (r8 & 255);
}

loc_801103F4:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_80110400;
    }
}

loc_801103F8:
{
    r12 = 0;
    goto loc_80110420;
}

loc_80110400:
{
    r0 = MemoryInline::FlatRead8((r4 + 5));
    r6 = (r7 & 255);
}

loc_8011040C:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_80110420;
    }
}

loc_80110410:
{
    r12 = 0;
    goto loc_80110420;
}

loc_8011041C:
{
    r12 = 0;
}

loc_80110420:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80110424:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80110460;
    }
}

loc_80110428:
{
    r3 = (r1 + 8);
    r5 = 4;
    r4 = (r4 + 6);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80110440:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80110480;
    }
}

loc_80110444:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    // inline leaf 0x801ED98C (1 guest instruction(s))
    // end of inlined leaf 0x801ED98C
    r12 = MemoryInline::FlatRead32((r31 + 160));
    r4 = MemoryInline::FlatRead32((r31 + 268));
    ctr = r12;
    ctx->lr = 0x8011045Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80110480;
}

loc_80110460:
{
    r12 = MemoryInline::FlatRead32((r3 + 164));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80110468:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80110480;
    }
}

loc_8011046C:
{
    r3 = r4;
    r4 = r5;
    r5 = MemoryInline::FlatRead32((r31 + 268));
    ctr = r12;
    ctx->lr = 0x80110480u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80110480:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80110350 func_80110350 preserves=true fpr_mask=0x00000000
