#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065E938(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065E938;

loc_8065E938:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r4 & 255);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = (r0 * 584);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r5 = MemoryInline::FlatRead32((r5 + 13848));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead32((r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_8065E97C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EC20;
    }
}

loc_8065E980:
{
    r28 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    ctx->lr = 0x8065E98Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065E990:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E9B0;
    }
}

loc_8065E994:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->lr = 0x8065E9A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8065E9D8;
}

loc_8065E9B0:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065E9C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065E9D4;
    }
}

loc_8065E9C4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 17));
    goto loc_8065E9D8;
}

loc_8065E9D4:
{
    r0 = 20;
}

loc_8065E9D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_8065E9DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065EA64;
    }
}

loc_8065E9E0:
{
    r28 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    ctx->lr = 0x8065E9F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065E9F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EA14;
    }
}

loc_8065E9F8:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->lr = 0x8065EA04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8065EA3C;
}

loc_8065EA14:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065EA24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EA38;
    }
}

loc_8065EA28:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead8((r3 + 17));
    goto loc_8065EA3C;
}

loc_8065EA38:
{
    r28 = 20;
}

loc_8065EA3C:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8065EA4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & -8);
    r0 = 7;
    r3 = (r29 + r3);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_8065ED54;
}

loc_8065EA64:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead32((r3 + 144));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8065EA7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EA94;
    }
}

loc_8065EA80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8065EA84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EB18;
    }
}

loc_8065EA88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8065EA8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EB9C;
    }
}

loc_8065EA90:
{
    goto loc_8065ED54;
}

loc_8065EA94:
{
    r28 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    ctx->lr = 0x8065EAA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065EAA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EAC8;
    }
}

loc_8065EAAC:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->lr = 0x8065EAB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_13 & -8);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8065EAF0;
}

loc_8065EAC8:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065EAD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EAEC;
    }
}

loc_8065EADC:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & -8);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead8((r3 + 17));
    goto loc_8065EAF0;
}

loc_8065EAEC:
{
    r28 = 20;
}

loc_8065EAF0:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8065EB00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_4 & -8);
    r0 = 6;
    r3 = (r29 + r3);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_8065ED54;
}

loc_8065EB18:
{
    r28 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    ctx->lr = 0x8065EB28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065EB2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EB4C;
    }
}

loc_8065EB30:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->lr = 0x8065EB3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8065EB74;
}

loc_8065EB4C:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065EB5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EB70;
    }
}

loc_8065EB60:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_11 & -8);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead8((r3 + 17));
    goto loc_8065EB74;
}

loc_8065EB70:
{
    r28 = 20;
}

loc_8065EB74:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8065EB84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_3 & -8);
    r0 = 5;
    r3 = (r29 + r3);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_8065ED54;
}

loc_8065EB9C:
{
    r28 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    ctx->lr = 0x8065EBACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065EBB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EBD0;
    }
}

loc_8065EBB4:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->lr = 0x8065EBC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8065EBF8;
}

loc_8065EBD0:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065EBE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EBF4;
    }
}

loc_8065EBE4:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead8((r3 + 17));
    goto loc_8065EBF8;
}

loc_8065EBF4:
{
    r28 = 20;
}

loc_8065EBF8:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8065EC08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -8);
    r0 = 4;
    r3 = (r29 + r3);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_8065ED54;
}

loc_8065EC20:
{
    r28 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    ctx->lr = 0x8065EC2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065EC30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EC50;
    }
}

loc_8065EC34:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->lr = 0x8065EC40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_16 & -8);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_8065EC78;
}

loc_8065EC50:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065EC60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065EC74;
    }
}

loc_8065EC64:
{
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_17 & -8);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 19));
    goto loc_8065EC78;
}

loc_8065EC74:
{
    r0 = 0;
}

loc_8065EC78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8065EC7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065ECE4;
    }
}

loc_8065EC80:
{
    r28 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    ctx->lr = 0x8065EC90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065EC94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065ECB4;
    }
}

loc_8065EC98:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->lr = 0x8065ECA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_19 & -8);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_8065ECDC;
}

loc_8065ECB4:
{
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065ECC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065ECD8;
    }
}

loc_8065ECC8:
{
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_20 & -8);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 19));
    goto loc_8065ECDC;
}

loc_8065ECD8:
{
    r0 = 0;
}

loc_8065ECDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8065ECE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065ED2C;
    }
}

loc_8065ECE4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead32((r3 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065ECFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065ED54;
    }
}

loc_8065ED00:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8065ED10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_24 & -8);
    r4 = 20;
    r3 = (r29 + r0);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r4));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_8065ED54;
}

loc_8065ED2C:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8065ED3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_22 & -8);
    r4 = 20;
    r3 = (r29 + r0);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r4));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_8065ED54:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001FB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065E938 func_8065E938 preserves=true fpr_mask=0x00000000
