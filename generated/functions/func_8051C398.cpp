#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051C398(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8051C398;

loc_8051C398:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80520000u;
    r6 = 0x80520000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r5 + -15564);
    r7 = 5;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    r4 = (r6 + -15500);
    r6 = 12;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = (r3 + 104);
    ctx->lr = 0x8051C3D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 192));
    r3 = 0;
    r4 = 0x808B0000u;
    MemoryInline::FlatWrite8((r29 + 174), static_cast<uint8_t>(r3));
}

loc_8051C3EC:
{
    r4 = (r4 + 11588);
    MemoryInline::FlatWrite32((r29 + 164), r4);
    MemoryInline::FlatWrite16((r29 + 168), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r29 + 170), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r29 + 172), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r29 + 195), static_cast<uint8_t>(r3));
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8051C410;
    }
}

loc_8051C408:
{
    r0 = 99;
    MemoryInline::FlatWrite8((r29 + 192), static_cast<uint8_t>(r0));
}

loc_8051C410:
{
    r0 = MemoryInline::FlatRead8((r29 + 193));
}

loc_8051C418:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_8051C424;
    }
}

loc_8051C41C:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r29 + 193), static_cast<uint8_t>(r0));
}

loc_8051C424:
{
    r0 = MemoryInline::FlatRead8((r29 + 194));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
}

loc_8051C42C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051C438;
    }
}

loc_8051C430:
{
    r0 = 31;
    MemoryInline::FlatWrite8((r29 + 194), static_cast<uint8_t>(r0));
}

loc_8051C438:
{
    r31 = 0;
    MemoryInline::FlatWrite8((r29 + 192), static_cast<uint8_t>(r31));
    r3 = r29;
    MemoryInline::FlatWrite8((r29 + 193), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r29 + 194), static_cast<uint8_t>(r31));
    ctx->lr = 0x8051C450u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C4A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x8051C45Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8051C460:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051C478;
    }
}

loc_8051C464:
{
    r3 = MemoryInline::FlatRead16((r30 + 14));
    r0 = (r30 + 136);
    MemoryInline::FlatWrite32((r29 + 208), r3);
    MemoryInline::FlatWrite32((r29 + 212), r0);
    goto loc_8051C480;
}

loc_8051C478:
{
    MemoryInline::FlatWrite32((r29 + 208), r31);
    MemoryInline::FlatWrite32((r29 + 212), r31);
}

loc_8051C480:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = r29;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8051C398 func_8051C398 preserves=true fpr_mask=0x00000000
