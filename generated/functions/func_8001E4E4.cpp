#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001E4E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001E4E4;

loc_8001E4E4:
{
    MemoryInline::FlatWriteRam32((r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    MemoryInline::FlatWriteRam32((r1 + 348), r31);
    MemoryInline::FlatWriteRam32((r1 + 344), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 340), r29);
    MemoryInline::FlatWriteRam32((r1 + 336), r28);
    // inline leaf 0x8001D28C (12 guest instruction(s))
}

loc_inl0_0x8001D28C:
{
}

loc_inl0_0x8001D290:
{
    r5 = 0;
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2176))) {
        goto loc_inl0_0x8001D2A0;
    }
}

loc_inl0_0x8001D298:
{
    r5 = 769;
    goto loc_inl0_0x8001D2B4;
}

loc_inl0_0x8001D2A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r4);
}

loc_inl0_0x8001D2AC:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8001D2B4;
    }
}

loc_inl0_0x8001D2B0:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
}

loc_inl0_0x8001D2B4:
{
    r3 = r5;
}

loc_inl0_cont_8001D28C:
{
    // end of inlined leaf 0x8001D28C
    r31 = MemoryInline::FlatRead8((r30 + 20));
    r29 = MemoryInline::FlatRead32((r30 + 28));
}

loc_8001E518:
{
    r28 = MemoryInline::FlatRead32((r30 + 32));
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8001E53C;
    }
}

loc_8001E520:
{
}

loc_8001E524:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(16))) {
        goto loc_8001E53C;
    }
}

loc_8001E528:
{
}

loc_8001E52C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_8001E598;
    }
}

loc_8001E530:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(17));
}

loc_8001E534:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E598;
    }
}

loc_8001E538:
{
    goto loc_8001E5FC;
}

loc_8001E53C:
{
    r30 = MemoryInline::FlatRead8((r30 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
}

loc_8001E544:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001E64C;
    }
}

loc_8001E548:
{
    r3 = (r1 + 264);
    r4 = 0;
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -27520));
    r0 = 128;
    r4 = 64;
    r5 = 17;
    r6 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 268), static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    r3 = (r1 + 264);
    MemoryInline::FlatWriteRam32((r1 + 264), r4);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 272), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 276), r6);
    MemoryInline::FlatWrite32((r13 + -27520), r0);
    ctx->lr = 0x8001E590u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001C93Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_8001E748;
}

loc_8001E598:
{
    // inline leaf 0x80020628 (4 guest instruction(s))
    r3 = 0x802A0000u;
    r3 = (r3 + 25912);
    r3 = MemoryInline::FlatRead32((r3 + 128));
    // end of inlined leaf 0x80020628
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r29));
}

loc_8001E5A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8001E5AC;
    }
}

loc_8001E5A4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_8001E5A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001E64C;
    }
}

loc_8001E5AC:
{
    r3 = (r1 + 200);
    r4 = 0;
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -27520));
    r0 = 128;
    r4 = 64;
    r5 = 17;
    r6 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 204), static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    r3 = (r1 + 200);
    MemoryInline::FlatWriteRam32((r1 + 200), r4);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 208), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 212), r6);
    MemoryInline::FlatWrite32((r13 + -27520), r0);
    ctx->lr = 0x8001E5F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001C93Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_8001E748;
}

loc_8001E5FC:
{
    r3 = (r1 + 136);
    r4 = 0;
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -27520));
    r0 = 128;
    r4 = 64;
    r5 = 18;
    r6 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 140), static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    r3 = (r1 + 136);
    MemoryInline::FlatWriteRam32((r1 + 136), r4);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 144), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 148), r6);
    MemoryInline::FlatWrite32((r13 + -27520), r0);
    ctx->lr = 0x8001E644u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001C93Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_8001E748;
}

loc_8001E64C:
{
    // inline leaf 0x8002082C (4 guest instruction(s))
    r3 = 0x802A0000u;
    r3 = (r3 + 25744);
    r3 = MemoryInline::FlatRead32((r3 + 152));
    // end of inlined leaf 0x8002082C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001E654:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001E6A8;
    }
}

loc_8001E658:
{
    r3 = (r1 + 72);
    r4 = 0;
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -27520));
    r0 = 128;
    r4 = 64;
    r5 = 22;
    r6 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 76), static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    r3 = (r1 + 72);
    MemoryInline::FlatWriteRam32((r1 + 72), r4);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 80), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 84), r6);
    MemoryInline::FlatWrite32((r13 + -27520), r0);
    ctx->lr = 0x8001E6A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001C93Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_8001E748;
}

loc_8001E6A8:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -27520));
    r0 = 128;
    r4 = 64;
    r5 = 0;
    r6 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    MemoryInline::FlatWrite32((r13 + -27520), r0);
    ctx->lr = 0x8001E6F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001C93Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8001E6F4:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E718;
    }
}

loc_8001E6FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(16));
}

loc_8001E700:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E718;
    }
}

loc_8001E704:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_8001E708:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E730;
    }
}

loc_8001E70C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(17));
}

loc_8001E710:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E730;
    }
}

loc_8001E714:
{
    goto loc_8001E748;
}

loc_8001E718:
{
    r0 = (r31 + -16);
    r3 = r30;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 134217727);
    ctx->lr = 0x8001E72Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020534u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    goto loc_8001E748;
}

loc_8001E730:
{
    r0 = (r31 + -17);
    r3 = r29;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4 = r28;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_1 & 134217727);
    ctx->lr = 0x8001E748u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800205B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_8001E748:
{
    r0 = MemoryInline::FlatRead32((r1 + 356));
    r31 = MemoryInline::FlatRead32((r1 + 348));
    r30 = MemoryInline::FlatRead32((r1 + 344));
    r29 = MemoryInline::FlatRead32((r1 + 340));
    r28 = MemoryInline::FlatRead32((r1 + 336));
    ctx->lr = r0;
    r1 = (r1 + 352);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8001E4E4 func_8001E4E4 preserves=true fpr_mask=0x00000000
