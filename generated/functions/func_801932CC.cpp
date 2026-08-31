#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801932CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801932CC;

loc_801932CC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80193010u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 20);
}

loc_801932F4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_801932F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80193308;
    }
}

loc_801932FC:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x80193308u;
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
    InvokeDirectCpu<0x80193074u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80193308:
{
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80193010u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 34);
}

loc_80193314:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(34));
}

loc_80193318:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80193460;
    }
}

loc_8019331C:
{
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80193010u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 48);
    r3 = 1;
    r4 = (r0 | 2);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80193020u>(ctx);
    r0 = 1073741824;
    r3 = -855638016;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r31 = MemoryInline::FlatRead32((r13 + -29296));
}

loc_80193348:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(1))) {
        goto loc_80193358;
    }
}

loc_8019334C:
{
    r31 = (r31 + 1);
    MemoryInline::FlatWrite32((r13 + -29296), r31);
    // inline leaf 0x80195014 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25580));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r13 + -25580), r0);
    // end of inlined leaf 0x80195014
}

loc_80193358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8019335C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80193460;
    }
}

loc_80193360:
{
    r0 = MemoryInline::FlatRead32((r13 + -25600));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80193368:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801933A0;
    }
}

loc_8019336C:
{
    r3 = MemoryInline::FlatRead32((r13 + -25596));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25596));
    MemoryInline::FlatWrite32((r13 + -25600), r0);
    r3 = (r3 + 44);
    ctx->lr = 0x80193388u;
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
    InvokeDirectCpu<0x801AAAA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80193010u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 48);
    r3 = 1;
    r4 = (r0 | 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80193020u>(ctx);
}

loc_801933A0:
{
    r4 = 0x80340000u;
    r3 = (r4 + 21952);
    r4 = MemoryInline::FlatRead32((r4 + 21952));
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801933B4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_801933C0;
    }
}

loc_801933B8:
{
    r0 = (r0 - r4);
    goto loc_801933CC;
}

loc_801933C0:
{
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_801933CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801933D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80193460;
    }
}

loc_801933D4:
{
    r3 = 0x80340000u;
    r3 = (r3 + 21952);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801933F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80193460;
    }
}

loc_801933F4:
{
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801933FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019340C;
    }
}

loc_80193400:
{
    r3 = MemoryInline::FlatRead32((r13 + -29296));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r13 + -29296), r0);
}

loc_8019340C:
{
    r4 = (r4 + -2147483648);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80193020u>(ctx);
    r7 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r13 + -29296));
    r6 = (r7 + 21952);
    r4 = MemoryInline::FlatRead32((r7 + 21952));
    r5 = MemoryInline::FlatRead32((r6 + 8));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r13 + -29296), r0);
    r4 = (r4 + 1);
    r0 = (r5 + 1);
    r3 = 1;
    r0 = (r0 & 15);
    MemoryInline::FlatWriteRam32((r7 + 21952), r4);
    MemoryInline::FlatWriteRam32((r6 + 8), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80193010u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 48);
    r3 = 1;
    r4 = (r0 | 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80193020u>(ctx);
}

loc_80193460:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801932CC func_801932CC preserves=true fpr_mask=0x00000000
