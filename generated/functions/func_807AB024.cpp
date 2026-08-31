#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AB024(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807AB024;

loc_807AB024:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x808A0000u;
    r29 = (r29 + 23032);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = MemoryInline::FlatRead32((r3 + 640));
    r3 = r28;
    // inline leaf 0x80591314 (12 guest instruction(s))
}

loc_inl0_0x80591314:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 2);
}

loc_inl0_0x80591328:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8059132C:
{
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r4 & 524288);
    r0_mrot_1 = (r4 & 24576);
    r0_mdest_1 = (r0 & -24577);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_inl0_0x80591338:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8059133C:
{
    r3 = 0;
    goto loc_inl0_cont_80591314;
}

loc_inl0_return:
{
}

loc_inl0_cont_80591314:
{
    // end of inlined leaf 0x80591314
}

loc_807AB060:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807AB070;
    }
}

loc_807AB064:
{
    r0 = MemoryInline::FlatRead32((r28 + 576));
}

loc_807AB06C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807AB074;
    }
}

loc_807AB070:
{
    r30 = 1;
}

loc_807AB074:
{
}

loc_807AB078:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_807AB084;
    }
}

loc_807AB07C:
{
    r3 = 1;
    goto loc_807AB0EC;
}

loc_807AB084:
{
    r3 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AB08C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AB0D0;
    }
}

loc_807AB090:
{
    r3 = MemoryInline::FlatRead32((r31 + 640));
    r0 = MemoryInline::FlatRead8((r3 + 26));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AB09C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AB0B8;
    }
}

loc_807AB0A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 180));
    r3 = r31;
    f2.d = MemoryInline::FlatReadFloat32((r29 + 204));
    r4 = 0;
    ctx->lr = 0x807AB0B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B2F54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807AB0EC;
}

loc_807AB0B8:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 180));
    r3 = r31;
    f2.d = MemoryInline::FlatReadFloat32((r29 + 204));
    r4 = 1;
    ctx->lr = 0x807AB0CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B2F54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807AB0EC;
}

loc_807AB0D0:
{
    r0 = (r3 & 32);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 180));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 204));
    r3 = r31;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 134217727);
    ctx->lr = 0x807AB0ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B2F54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807AB0EC:
{
    r0 = MemoryInline::FlatRead8((r31 + 463));
}

loc_807AB0F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807AB0FC;
    }
}

loc_807AB0F8:
{
    r3 = 1;
}

loc_807AB0FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807AB100:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AB160;
    }
}

loc_807AB104:
{
    r0 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AB10C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AB130;
    }
}

loc_807AB110:
{
    r3 = MemoryInline::FlatRead32((r31 + 640));
    r0 = MemoryInline::FlatRead8((r3 + 26));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AB11C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807AB130;
    }
}

loc_807AB120:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = 1;
    r4 = (r0 & 65535);
    ctx->lr = 0x807AB130u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079C620u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807AB130:
{
    r3 = r31;
    ctx->lr = 0x807AB138u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B3EC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32(r29);
    r4 = 6;
    r3 = 255;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 696), r4);
    MemoryInline::FlatWrite8((r31 + 616), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 617), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 620), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 624), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 628), f0.d);
}

loc_807AB160:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807AB024 func_807AB024 preserves=true fpr_mask=0x00000000
