#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80161468(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80161468;

loc_80161468:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWrite32((r13 + -25960), r31);
    r0 = MemoryInline::FlatRead32((r13 + -25972));
}

loc_80161488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80161510;
    }
}

loc_8016148C:
{
    // inline leaf 0x8016665C (4 guest instruction(s))
    r3 = 0x80340000u;
    r3 = (r3 + 13664);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x8016665C
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80161494:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801615DC;
    }
}

loc_80161498:
{
    r3 = 0x80340000u;
    r3 = (r3 + 12544);
    ctx->lr = 0x801614A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A0964u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r13 + -25972), r31);
    MemoryInline::FlatWrite32((r13 + -25972), r31);
    r0 = MemoryInline::FlatRead32((r13 + -25884));
}

loc_801614B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_801614C0;
    }
}

loc_801614B8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25964), r0);
}

loc_801614C0:
{
    r0 = MemoryInline::FlatRead32((r13 + -25904));
}

loc_801614C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801614E4;
    }
}

loc_801614CC:
{
    r3 = MemoryInline::FlatRead32((r13 + -25872));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801614D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801615DC;
    }
}

loc_801614D8:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_801615DC;
}

loc_801614E4:
{
    // inline leaf 0x8016695C (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x8016695C
    r3 = MemoryInline::FlatRead32((r13 + -25872));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801614F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80161504;
    }
}

loc_801614F4:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    ctx->lr = 0x80161500u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80160B18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801615DC;
}

loc_80161504:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r13 + -25996), r0);
    goto loc_801615DC;
}

loc_80161510:
{
    // inline leaf 0x8016665C (4 guest instruction(s))
    r3 = 0x80340000u;
    r3 = (r3 + 13664);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x8016665C
    r0 = (r3 & 1);
}

loc_80161518:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80161554;
    }
}

loc_8016151C:
{
    r0 = MemoryInline::FlatRead32((r13 + -25904));
    r3 = 1;
    MemoryInline::FlatWrite32((r13 + -25976), r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8016152C:
{
    MemoryInline::FlatWrite32((r13 + -25972), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80161544;
    }
}

loc_80161534:
{
    r3 = MemoryInline::FlatRead32((r13 + -25872));
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_801615DC;
}

loc_80161544:
{
    r3 = MemoryInline::FlatRead32((r13 + -25872));
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_801615DC;
}

loc_80161554:
{
    // inline leaf 0x8016665C (4 guest instruction(s))
    r3 = 0x80340000u;
    r3 = (r3 + 13664);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x8016665C
    r0 = (r3 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016155C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801615DC;
    }
}

loc_80161560:
{
    r3 = 0x80340000u;
    r3 = (r3 + 12544);
    ctx->lr = 0x8016156Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A0964u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r13 + -25976), r31);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80166964u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r13 + -25972), r31);
    r0 = MemoryInline::FlatRead32((r13 + -25884));
}

loc_80161584:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80161590;
    }
}

loc_80161588:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25964), r0);
}

loc_80161590:
{
    r0 = MemoryInline::FlatRead32((r13 + -25904));
}

loc_80161598:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801615B4;
    }
}

loc_8016159C:
{
    r3 = MemoryInline::FlatRead32((r13 + -25872));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801615A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801615DC;
    }
}

loc_801615A8:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_801615DC;
}

loc_801615B4:
{
    // inline leaf 0x8016695C (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x8016695C
    r3 = MemoryInline::FlatRead32((r13 + -25872));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801615C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801615D4;
    }
}

loc_801615C4:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    ctx->lr = 0x801615D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80160B18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801615DC;
}

loc_801615D4:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r13 + -25996), r0);
}

loc_801615DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80161468 func_80161468 preserves=true fpr_mask=0x00000000
