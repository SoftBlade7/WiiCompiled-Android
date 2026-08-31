#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010914C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8010914C;

loc_8010914C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead32(r5);
    r9 = (r4 + r0);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
    r8 = r9;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(92));
}

loc_80109178:
{
    r9 = (r9 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801091C0;
    }
}

loc_80109180:
{
    r30 = MemoryInline::FlatRead32(r3);
    r4 = 0x80280000u;
    r4 = (r4 + -15688);
    r5 = 256;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800131E0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 255), static_cast<uint8_t>(r3));
    r3 = r31;
    r4 = 3;
    r5 = 1;
    MemoryInline::FlatWrite32((r30 + 1464), r0);
    ctx->lr = 0x801091B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800FF8C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 3;
    goto loc_80109318;
}

loc_801091C0:
{
    r4 = 0;
    goto loc_80109264;
}

loc_801091C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801091CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80109210;
    }
}

loc_801091D0:
{
    r30 = MemoryInline::FlatRead32(r3);
    r4 = 0x80280000u;
    r4 = (r4 + -15688);
    r5 = 256;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800131E0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 255), static_cast<uint8_t>(r3));
    r3 = r31;
    r4 = 3;
    r5 = 1;
    MemoryInline::FlatWrite32((r30 + 1464), r0);
    ctx->lr = 0x80109208u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800FF8C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 3;
    goto loc_80109318;
}

loc_80109210:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(511));
}

loc_80109214:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80109258;
    }
}

loc_80109218:
{
    r30 = MemoryInline::FlatRead32(r3);
    r4 = 0x80280000u;
    r4 = (r4 + -15688);
    r5 = 256;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800131E0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 255), static_cast<uint8_t>(r3));
    r3 = r31;
    r4 = 3;
    r5 = 1;
    MemoryInline::FlatWrite32((r30 + 1464), r0);
    ctx->lr = 0x80109250u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800FF8C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 3;
    goto loc_80109318;
}

loc_80109258:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r6 = (r6 + 1);
    r4 = (r4 + 1);
}

loc_80109264:
{
    r0 = MemoryInline::FlatRead8(r9);
    r9 = (r9 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80109274:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_801091C8;
    }
}

loc_80109278:
{
    r0 = 0;
    r4 = 0;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    goto loc_801092DC;
}

loc_80109288:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(511));
}

loc_8010928C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801092D0;
    }
}

loc_80109290:
{
    r30 = MemoryInline::FlatRead32(r3);
    r4 = 0x80280000u;
    r4 = (r4 + -15688);
    r5 = 256;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800131E0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 255), static_cast<uint8_t>(r3));
    r3 = r31;
    r4 = 3;
    r5 = 1;
    MemoryInline::FlatWrite32((r30 + 1464), r0);
    ctx->lr = 0x801092C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800FF8C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 3;
    goto loc_80109318;
}

loc_801092D0:
{
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
    r4 = (r4 + 1);
}

loc_801092DC:
{
    r0 = MemoryInline::FlatRead8(r9);
    r9 = (r9 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(92));
}

loc_801092EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801092F8;
    }
}

loc_801092F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801092F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80109288;
    }
}

loc_801092F8:
{
    r3 = 0;
    r0 = (r9 - r8);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r3));
    r3 = 0;
    r4 = MemoryInline::FlatRead32(r5);
    r4 = (r0 + r4);
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80109318:
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
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFC001BFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8010914C func_8010914C preserves=true fpr_mask=0x00000000
