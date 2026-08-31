#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AEC80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AEC80;

loc_801AEC80:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r4 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AEC90:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80350000u;
    r30 = (r30 + -32336);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = MemoryInline::FlatRead32((r13 + -28916));
    r3 = MemoryInline::FlatRead32((r13 + -25164));
    r29 = PPC_Srw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r28));
    r0 = (r3 & ~r29);
    MemoryInline::FlatWrite32((r13 + -25164), r0);
    r7 = (r3 & r29);
    r3 = 1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AED18;
    }
}

loc_801AECCC:
{
    r5 = MemoryInline::FlatRead32((r13 + -25160));
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(32));
}

loc_801AECD8:
{
    MemoryInline::FlatWrite32((r13 + -28916), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AEF80;
    }
}

loc_801AECE0:
{
    r4 = PPC_Srw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
    r0 = (r30 + 0);
    r4 = (r5 & ~r4);
    r5 = 12;
    r3 = (r3 * 12);
    MemoryInline::FlatWrite32((r13 + -25160), r4);
    r4 = 0;
    r3 = (r0 + r3);
    ctx->lr = 0x801AED04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
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
    r4 = 0x801B0000u;
    r3 = MemoryInline::FlatRead32((r13 + -28916));
    r4 = (r4 + -4992);
    ctx->lr = 0x801AED14u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B39BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801AEF80;
}

loc_801AED18:
{
    r5 = (r4 & 402653184);
    r8 = (r4 & -256);
    r0 = (r5 + -134217728);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r4 = (r30 + 48);
}

loc_801AED30:
{
    r4_addr_1 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_1, r8);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_801AED40;
    }
}

loc_801AED38:
{
    r0 = (r8 & 16777216);
}

loc_801AED3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AED90;
    }
}

loc_801AED40:
{
    r7 = MemoryInline::FlatRead32((r13 + -25160));
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(32));
}

loc_801AED4C:
{
    MemoryInline::FlatWrite32((r13 + -28916), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AEF80;
    }
}

loc_801AED54:
{
    r3 = 0x80000000u;
    r0 = (r30 + 0);
    r6 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r4 = 0;
    r3 = (r5 * 12);
    r5 = 12;
    r6 = (r7 & ~r6);
    MemoryInline::FlatWrite32((r13 + -25160), r6);
    r3 = (r0 + r3);
    ctx->lr = 0x801AED7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
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
    r4 = 0x801B0000u;
    r3 = MemoryInline::FlatRead32((r13 + -28916));
    r4 = (r4 + -4992);
    ctx->lr = 0x801AED8Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B39BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801AEF80;
}

loc_801AED90:
{
    r0 = MemoryInline::FlatRead32((r13 + -28904));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801AED98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AEE18;
    }
}

loc_801AED9C:
{
    r0 = MemoryInline::FlatRead32((r13 + -25156));
    r3 = r28;
    r4 = (r1 + 8);
    r0 = (r0 | r29);
    MemoryInline::FlatWrite32((r13 + -25156), r0);
    ctx->lr = 0x801AEDB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B323Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r13 + -28908));
    r3 = r28;
    r4 = (r0 | 4194304);
    // inline leaf 0x801B30C8 (5 guest instruction(s))
    r3 = (r3 * 12);
    r0 = -855638016;
    r3 = (r0 + r3);
    MemoryInline::FlatWrite32((r3 + 25600), r4);
    // end of inlined leaf 0x801B30C8
    r3 = MemoryInline::FlatRead32((r13 + -25156));
    ctx->lr = 0x801AEDCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B3148u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r13 + -25160));
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(32));
}

loc_801AEDD8:
{
    MemoryInline::FlatWrite32((r13 + -28916), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AEF80;
    }
}

loc_801AEDE0:
{
    r4 = PPC_Srw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
    r0 = (r30 + 0);
    r4 = (r5 & ~r4);
    r5 = 12;
    r3 = (r3 * 12);
    MemoryInline::FlatWrite32((r13 + -25160), r4);
    r4 = 0;
    r3 = (r0 + r3);
    ctx->lr = 0x801AEE04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
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
    r4 = 0x801B0000u;
    r3 = MemoryInline::FlatRead32((r13 + -28916));
    r4 = (r4 + -4992);
    ctx->lr = 0x801AEE14u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B39BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801AEF80;
}

loc_801AEE18:
{
    r0 = (r8 & -2147483648);
}

loc_801AEE1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801AEE28;
    }
}

loc_801AEE20:
{
    r0 = (r8 & 67108864);
}

loc_801AEE24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801AEE98;
    }
}

loc_801AEE28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801AEE2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AEE64;
    }
}

loc_801AEE30:
{
    r3 = MemoryInline::FlatRead32((r13 + -28916));
    r8 = 0x801B0000u;
    r0 = (r30 + 0);
    r4 = (r13 + -28892);
    r6 = (r3 * 12);
    r8 = (r8 + -5596);
    r5 = 3;
    r7 = 10;
    r6 = (r0 + r6);
    r10 = 0;
    r9 = 0;
    ctx->lr = 0x801AEE60u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B33ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801AEF20;
}

loc_801AEE64:
{
    r3 = MemoryInline::FlatRead32((r13 + -28916));
    r8 = 0x801B0000u;
    r0 = (r30 + 0);
    r4 = (r13 + -28896);
    r6 = (r3 * 12);
    r8 = (r8 + -5596);
    r5 = 1;
    r7 = 10;
    r6 = (r0 + r6);
    r10 = 0;
    r9 = 0;
    ctx->lr = 0x801AEE94u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B33ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801AEF20;
}

loc_801AEE98:
{
    r0 = (r8 & 1048576);
}

loc_801AEE9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801AEF20;
    }
}

loc_801AEEA0:
{
    r0 = (r8 & 524288);
}

loc_801AEEA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AEF20;
    }
}

loc_801AEEA8:
{
    r0 = (r8 & 262144);
}

loc_801AEEAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AEF20;
    }
}

loc_801AEEB0:
{
    r0 = (r8 & 1073741824);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AEEB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AEEEC;
    }
}

loc_801AEEB8:
{
    r4 = (r28 * 12);
    r0 = (r30 + 0);
    r8 = 0x801B0000u;
    r3 = r28;
    r6 = (r0 + r4);
    r8 = (r8 + -5596);
    r4 = (r13 + -28896);
    r5 = 1;
    r7 = 10;
    r10 = 0;
    r9 = 0;
    ctx->lr = 0x801AEEE8u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B33ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801AEF20;
}

loc_801AEEEC:
{
    r5 = (r28 * 12);
    r4 = (r30 + 64);
    r8 = 0x801B0000u;
    r0 = (r30 + 0);
    r4 = (r4 + r6);
    r3 = r28;
    r6 = (r0 + r5);
    r8 = (r8 + -5204);
    r5 = 3;
    r7 = 8;
    r10 = 0;
    r9 = 0;
    ctx->lr = 0x801AEF20u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B33ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801AEF20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AEF24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AEF80;
    }
}

loc_801AEF28:
{
    r7 = MemoryInline::FlatRead32((r13 + -25160));
    r0 = MemoryInline::FlatRead32((r13 + -25176));
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r0 = (r0 | r29);
    MemoryInline::FlatWrite32((r13 + -28916), r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(32));
}

loc_801AEF40:
{
    MemoryInline::FlatWrite32((r13 + -25176), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AEF80;
    }
}

loc_801AEF48:
{
    r3 = 0x80000000u;
    r0 = (r30 + 0);
    r6 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r4 = 0;
    r3 = (r5 * 12);
    r5 = 12;
    r6 = (r7 & ~r6);
    MemoryInline::FlatWrite32((r13 + -25160), r6);
    r3 = (r0 + r3);
    ctx->lr = 0x801AEF70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
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
    r4 = 0x801B0000u;
    r3 = MemoryInline::FlatRead32((r13 + -28916));
    r4 = (r4 + -4992);
    ctx->lr = 0x801AEF80u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B39BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801AEF80:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AEC80 func_801AEC80 preserves=true fpr_mask=0x00000000
