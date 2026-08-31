#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AA688(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807AA688;

loc_807AA688:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 23032);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWrite16((r3 + 692), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32((r3 + 696), r0);
    MemoryInline::FlatWrite32((r3 + 700), r5);
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead16((r6 + 12));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AA6CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AA710;
    }
}

loc_807AA6D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 180));
    r30 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    ctx->lr = 0x807AA6E8u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B5178u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r3 = 1;
    r0 = 255;
    MemoryInline::FlatWrite32((r29 + 696), r3);
    MemoryInline::FlatWrite8((r29 + 616), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 617), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteFloat32((r29 + 620), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 624), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 628), f0.d);
    goto loc_807AA828;
}

loc_807AA710:
{
    r5 = 0x809C0000u;
    r30 = 1;
    r0 = MemoryInline::FlatRead8((r5 + 14523));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AA720:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807AA7DC;
    }
}

loc_807AA724:
{
    r0 = MemoryInline::FlatRead8((r6 + 68));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_807AA72C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AA7DC;
    }
}

loc_807AA730:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 32768);
}

loc_807AA738:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807AA744;
    }
}

loc_807AA73C:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
    goto loc_807AA748;
}

loc_807AA744:
{
    r0 = 12;
}

loc_807AA748:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_807AA74C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807AA758;
    }
}

loc_807AA750:
{
    r0 = 12;
    goto loc_807AA7AC;
}

loc_807AA758:
{
    r3 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r6 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r6 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r3 + -1);
    r5 = (r0 & 255);
}

loc_807AA77C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(1))) {
        goto loc_807AA788;
    }
}

loc_807AA780:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead8((r3 + 14520));
}

loc_807AA788:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14520));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807AA794:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807AA7A8;
    }
}

loc_807AA798:
{
    r0 = MemoryInline::FlatRead32((r6 + 24));
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -1));
    goto loc_807AA7AC;
}

loc_807AA7A8:
{
    r0 = 12;
}

loc_807AA7AC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 184));
    r3 = r29;
    r9 = (r0 & 255);
    r5 = 45;
    r6 = 1;
    r7 = 0;
    r8 = 1;
    r10 = 0;
    ctx->lr = 0x807AA7D0u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B4878u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 3;
    MemoryInline::FlatWrite32((r29 + 696), r0);
    goto loc_807AA81C;
}

loc_807AA7DC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 184));
    r3 = r29;
    r5 = 0;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x807AA7F4u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B5178u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r4 = 2;
    r3 = 255;
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 696), r4);
    MemoryInline::FlatWrite8((r29 + 616), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r29 + 617), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r29 + 620), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 624), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 628), f0.d);
}

loc_807AA81C:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r29 + 120), r0);
}

loc_807AA828:
{
    r3 = r29;
    // inline leaf 0x807B2EF8 (7 guest instruction(s))
    r4 = 0x808A0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24648));
    MemoryInline::FlatWrite32((r3 + 640), r0);
    MemoryInline::FlatWriteFloat32((r3 + 644), f0.d);
    MemoryInline::FlatWrite32((r3 + 684), r0);
    // end of inlined leaf 0x807B2EF8
    r0 = MemoryInline::FlatRead32((r29 + 124));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AA838:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AA844;
    }
}

loc_807AA83C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 696), r0);
}

loc_807AA844:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 80));
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 88));
    MemoryInline::FlatWriteFloat32((r29 + 724), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 728), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 732), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF7F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807AA688 func_807AA688 preserves=true fpr_mask=0x00000000
