#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80533ED8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80533ED8;

loc_80533ED8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x80890000u;
    r7 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r8 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat32((r6 + 336));
    r6 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r8 = (r8 + 13476);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 340));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r7 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r6 + 376));
    r6 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r30 = r3;
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r8);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 8), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 32), static_cast<uint8_t>(r0));
    r8 = MemoryInline::FlatRead32((r6 + -10520));
    r6 = MemoryInline::FlatRead32((r8 + 32));
}

loc_80533F54:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80533F5C;
    }
}

loc_80533F58:
{
    r7 = MemoryInline::FlatRead16((r6 + 4));
}

loc_80533F5C:
{
    r0 = (0 - r7);
    r0 = (r0 | r7);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_80533F68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80533F90;
    }
}

loc_80533F6C:
{
    r4 = MemoryInline::FlatRead32((r8 + 28));
}

loc_80533F74:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80533F80;
    }
}

loc_80533F78:
{
    r4 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_80533F84;
}

loc_80533F80:
{
    r4 = 0;
}

loc_80533F84:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_80533F90:
{
}

loc_80533F94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80533FA4;
    }
}

loc_80533F98:
{
    r4 = MemoryInline::FlatRead32((r8 + 32));
    r0 = MemoryInline::FlatRead8((r4 + 12));
    goto loc_80533FA8;
}

loc_80533FA4:
{
    r0 = -1;
}

loc_80533FA8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80533FB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534090;
    }
}

loc_80533FB4:
{
}

loc_80533FB8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80533FC8;
    }
}

loc_80533FBC:
{
    r4 = MemoryInline::FlatRead32((r8 + 32));
    r4 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_80533FCC;
}

loc_80533FC8:
{
    r4 = 0;
}

loc_80533FCC:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_80533FD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80534000;
    }
}

loc_80533FDC:
{
    r4 = MemoryInline::FlatRead32((r8 + 28));
}

loc_80533FE4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80533FF0;
    }
}

loc_80533FE8:
{
    r4 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_80533FF4;
}

loc_80533FF0:
{
    r4 = 0;
}

loc_80533FF4:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_80534000:
{
}

loc_80534004:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80534014;
    }
}

loc_80534008:
{
    r4 = MemoryInline::FlatRead32((r8 + 32));
    r0 = MemoryInline::FlatRead8((r4 + 12));
    goto loc_80534018;
}

loc_80534014:
{
    r0 = -1;
}

loc_80534018:
{
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r3 + 39), static_cast<uint8_t>(r0));
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + -10520));
    r4 = MemoryInline::FlatRead32((r6 + 32));
}

loc_8053402C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80534038;
    }
}

loc_80534030:
{
    r4 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_8053403C;
}

loc_80534038:
{
    r4 = 0;
}

loc_8053403C:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_80534048:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80534070;
    }
}

loc_8053404C:
{
    r4 = MemoryInline::FlatRead32((r6 + 28));
}

loc_80534054:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80534060;
    }
}

loc_80534058:
{
    r4 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_80534064;
}

loc_80534060:
{
    r4 = 0;
}

loc_80534064:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
}

loc_80534070:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80534074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534084;
    }
}

loc_80534078:
{
    r4 = MemoryInline::FlatRead32((r6 + 32));
    r0 = MemoryInline::FlatRead8((r4 + 12));
    goto loc_80534088;
}

loc_80534084:
{
    r0 = -1;
}

loc_80534088:
{
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r3 + 40), static_cast<uint8_t>(r0));
    goto loc_8053409C;
}

loc_80534090:
{
    r0 = -1;
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r3 + 39), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r3 + 40), static_cast<uint8_t>(r0));
}

loc_8053409C:
{
    r4 = (r5 * 12);
    r28 = 0;
    r29 = 1;
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r3 + 36), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r3 + 38), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r28);
    r3 = (r4 + 16);
    ctx->lr = 0x805340BCu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80520000u;
    r5 = 0x80520000u;
    r7 = r31;
    r6 = 12;
    r4 = (r4 + -15500);
    r5 = (r5 + -15564);
    ctx->lr = 0x805340D8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020E34u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 60), r3);
    r3 = 12;
    ctx->lr = 0x805340E4u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805340E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80534108;
    }
}

loc_805340EC:
{
    r4 = 0x808B0000u;
    r4 = (r4 + 11588);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r28));
    MemoryInline::FlatWriteRam8((r3 + 6), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r28));
}

loc_80534108:
{
    r5 = MemoryInline::FlatRead8((r30 + 8));
    r4 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r3);
    r3 = 0x809C0000u;
    r0 = (r5 * 240);
    MemoryInline::FlatWrite32((r30 + 68), r4);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 46));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80534134:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534158;
    }
}

loc_80534138:
{
    r0 = (r0 & 255);
    r3 = 0x809C0000u;
    r0 = (r0 * 236);
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + r0);
    r0 = (r3 + 4);
    MemoryInline::FlatWrite32((r30 + 72), r0);
    goto loc_80534170;
}

loc_80534158:
{
    r3 = 0x809C0000u;
    r0 = (r5 * 384);
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + r0);
    r0 = (r3 + 948);
    MemoryInline::FlatWrite32((r30 + 72), r0);
}

loc_80534170:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
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
// RECOMP_REGISTRATION base 0x80533ED8 func_80533ED8 preserves=true fpr_mask=0x00000000
