#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052E950(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_8052EC70_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r18_addr_0 = 0;
    uint32_t r18_addr_1 = 0;
    uint32_t r18_addr_2 = 0;
    uint32_t r18_addr_3 = 0;
    uint32_t r18_addr_4 = 0;
    uint32_t r18_addr_5 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r19_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052E950;

loc_8052E950:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 112);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    r0 = MemoryInline::FlatRead32((r3 + 2900));
    r21 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r21 + -10456));
    r15 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052E988:
{
    r22 = MemoryInline::FlatRead8((r4 + 36));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052ECF0;
    }
}

loc_8052E990:
{
    r0 = (r22 + -1);
    r3 = 0x80890000u;
    r0 = (r0 * 12);
    r4 = 0x80890000u;
    f31.d = MemoryInline::FlatReadFloat64((r3 + 224));
    r18 = (r1 + 8);
    r4 = (r4 + 48);
    r20 = (r4 + r0);
    r17 = 0;
    r30 = 0x809C0000u;
    r29 = 1;
    r31 = 1127219200;
    r26 = 0;
    r14 = 0x80890000u;
    goto loc_8052EC4C;
}

loc_8052E9CC:
{
    r3 = MemoryInline::FlatRead32((r30 + -10448));
    r19_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r19 = (r19_rot_2 & 1020);
    r6 = MemoryInline::FlatRead32((r21 + -10456));
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead32((r6 + 2928));
    r5_addr_2 = (r5 + r19);
    r5 = MemoryInline::FlatRead32(r5_addr_2);
    r0 = (r3 + -3);
}

loc_8052E9F0:
{
    r23 = MemoryInline::FlatRead8((r5 + 32));
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_8052EA08;
    }
}

loc_8052E9F8:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
    r0 = (r0 & 193);
}

loc_8052EA00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052EA08;
    }
}

loc_8052EA04:
{
    r4 = 1;
}

loc_8052EA08:
{
}

loc_8052EA0C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052EA18;
    }
}

loc_8052EA10:
{
    r24 = MemoryInline::FlatRead16((r5 + 34));
    goto loc_8052EA1C;
}

loc_8052EA18:
{
    r24 = 0;
}

loc_8052EA1C:
{
    r3 = MemoryInline::FlatRead32((r15 + 2896));
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(1));
    r25 = (r25_rot_2 & 510);
    r18_addr_2 = (r18 + r25);
    MemoryInline::FlatWrite16(r18_addr_2, static_cast<uint16_t>(r26));
    r0 = 0;
}

loc_8052EA30:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(7))) {
        goto loc_8052EA40;
    }
}

loc_8052EA34:
{
}

loc_8052EA38:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(10))) {
        goto loc_8052EA40;
    }
}

loc_8052EA3C:
{
    r0 = 1;
}

loc_8052EA40:
{
}

loc_8052EA44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052EBE4;
    }
}

loc_8052EA48:
{
    r27 = (r17 & 255);
    f30.d = MemoryInline::FlatReadFloat32((r14 + -88));
    r0 = (r27 * 240);
    r16 = 0;
    r28 = (r15 + r0);
    goto loc_8052EB80;
}

loc_8052EA60:
{
    r0 = (r16 & 255);
}

loc_8052EA68:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_8052EB7C;
    }
}

loc_8052EA6C:
{
    r4 = MemoryInline::FlatRead32((r21 + -10456));
    r0 = 0;
    r3 = 0;
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 2928));
    r4 = (r4 + -3);
}

loc_8052EA88:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_8052EA9C;
    }
}

loc_8052EA8C:
{
    r4 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r4 = (r4 & 193);
}

loc_8052EA94:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052EA9C;
    }
}

loc_8052EA98:
{
    r5 = 1;
}

loc_8052EA9C:
{
}

loc_8052EAA0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8052EAD4;
    }
}

loc_8052EAA4:
{
    r5 = MemoryInline::FlatRead32((r30 + -10448));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & 1020);
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r5_addr_4 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_4);
    r4 = MemoryInline::FlatRead16((r4 + 34));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(r4));
}

loc_8052EABC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052EAC8;
    }
}

loc_8052EAC0:
{
    r0 = 1;
    goto loc_8052EB00;
}

loc_8052EAC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052EB00;
    }
}

loc_8052EACC:
{
    r3 = 1;
    goto loc_8052EB00;
}

loc_8052EAD4:
{
    r5 = MemoryInline::FlatRead32((r30 + -10448));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & 1020);
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r5_addr_5 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_5);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(r4));
}

loc_8052EAEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052EAF8;
    }
}

loc_8052EAF0:
{
    r0 = 1;
    goto loc_8052EB00;
}

loc_8052EAF8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052EB00;
    }
}

loc_8052EAFC:
{
    r3 = 1;
}

loc_8052EB00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052EB04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052EB40;
    }
}

loc_8052EB08:
{
    r0 = (r16 & 255);
    r3 = (r28 + 236);
    r0 = (r0 * 240);
    r4 = (r15 + r0);
    r4 = (r4 + 236);
    ctx->lr = 0x8052EB20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052D118u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWriteRam32((r1 + 32), r31);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    goto loc_8052EB7C;
}

loc_8052EB40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052EB44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052EB7C;
    }
}

loc_8052EB48:
{
    r0 = (r16 & 255);
    r3 = (r28 + 236);
    r0 = (r0 * 240);
    r4 = (r15 + r0);
    r4 = (r4 + 236);
    ctx->lr = 0x8052EB60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052D1C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWriteRam32((r1 + 32), r31);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
}

loc_8052EB7C:
{
    r16 = (r16 + 1);
}

loc_8052EB80:
{
    r0 = (r16 & 255);
}

loc_8052EB88:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r22))) {
        goto loc_8052EA60;
    }
}

loc_8052EB8C:
{
    r3 = MemoryInline::FlatRead32((r21 + -10456));
    f0.d = PPC_Fctiwz(f30.d);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 2928));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = (r3 + -3);
}

loc_8052EBA8:
{
    r3 = MemoryInline::FlatRead32((r1 + 36));
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_8052EBC0;
    }
}

loc_8052EBB0:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
    r0 = (r0 & 193);
}

loc_8052EBB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052EBC0;
    }
}

loc_8052EBBC:
{
    r4 = 1;
}

loc_8052EBC0:
{
}

loc_8052EBC4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8052EBE0;
    }
}

loc_8052EBC8:
{
}

loc_8052EBCC:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(1))) {
        goto loc_8052EBE0;
    }
}

loc_8052EBD0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8052EBD8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8052EBE0;
    }
}

loc_8052EBDC:
{
    r3 = 1;
}

loc_8052EBE0:
{
    r18_addr_3 = (r18 + r25);
    MemoryInline::FlatWrite16(r18_addr_3, static_cast<uint16_t>(r3));
}

loc_8052EBE4:
{
}

loc_8052EBE8:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8052EC48;
    }
}

loc_8052EBEC:
{
}

loc_8052EBF0:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8052EC48;
    }
}

loc_8052EBF4:
{
    r0 = (r17 & 255);
    r0 = (r0 * 240);
    r4 = (r15 + r0);
    MemoryInline::FlatWrite8((r4 + 234), static_cast<uint8_t>(r23));
    r0 = MemoryInline::FlatRead32((r15 + 2896));
}

loc_8052EC0C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(9))) {
        goto loc_8052EC18;
    }
}

loc_8052EC10:
{
}

loc_8052EC14:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(10))) {
        goto loc_8052EC20;
    }
}

loc_8052EC18:
{
}

loc_8052EC1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8052EC34;
    }
}

loc_8052EC20:
{
    r3 = MemoryInline::FlatRead32((r30 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r19);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = MemoryInline::FlatRead16((r3 + 34));
    goto loc_8052EC3C;
}

loc_8052EC34:
{
    r3 = (r20 + r23);
    r3 = MemoryInline::FlatRead8((r3 + -1));
}

loc_8052EC3C:
{
    r0 = MemoryInline::FlatRead16((r4 + 224));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16((r4 + 226), static_cast<uint16_t>(r0));
}

loc_8052EC48:
{
    r17 = (r17 + 1);
}

loc_8052EC4C:
{
    r0 = (r17 & 255);
}

loc_8052EC54:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r22))) {
        goto loc_8052E9CC;
    }
}

loc_8052EC58:
{
    r14 = (r1 + 8);
    r16 = 0;
    goto loc_8052EC84;
}

loc_8052EC64:
{
    r3 = (r16 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 510);
    r3 = (r3 * 240);
    addr_lhax_8052EC70_loc_0 = (r14 + r0);
    r4 = MemoryInline::FlatRead16(addr_lhax_8052EC70_loc_0);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r15 + r3);
    r3 = (r3 + 236);
    // inline leaf 0x8052D270 (10 guest instruction(s))
}

loc_inl1_0x8052D270:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 + r4);
}

loc_inl1_0x8052D27C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_inl1_0x8052D284;
    }
}

loc_inl1_0x8052D280:
{
    r0 = 1;
}

loc_inl1_0x8052D284:
{
}

loc_inl1_0x8052D288:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(9999))) {
        goto loc_inl1_0x8052D290;
    }
}

loc_inl1_0x8052D28C:
{
    r0 = 9999;
}

loc_inl1_0x8052D290:
{
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
}

loc_inl1_cont_8052D270:
{
    // end of inlined leaf 0x8052D270
    r16 = (r16 + 1);
}

loc_8052EC84:
{
    r0 = (r16 & 255);
}

loc_8052EC8C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r22))) {
        goto loc_8052EC64;
    }
}

loc_8052EC90:
{
    r0 = MemoryInline::FlatRead32((r15 + 2896));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052EC98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052ECF0;
    }
}

loc_8052EC9C:
{
    r3 = 0x809C0000u;
    r16 = 0;
    r15 = MemoryInline::FlatRead32((r3 + -10448));
    r14 = 0x809C0000u;
    goto loc_8052ECDC;
}

loc_8052ECB0:
{
    r0 = (r16 & 255);
    r0 = (r0 * 240);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052ECC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052ECD8;
    }
}

loc_8052ECC8:
{
    r3 = MemoryInline::FlatRead32((r15 + 12));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    ctx->lr = 0x8052ECD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805368F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8052ECD8:
{
    r16 = (r16 + 1);
}

loc_8052ECDC:
{
    r4 = MemoryInline::FlatRead32((r14 + -10456));
    r3 = (r16 & 255);
    r0 = MemoryInline::FlatRead8((r4 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8052ECEC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052ECB0;
    }
}

loc_8052ECF0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    f30.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8052E950 func_8052E950 preserves=false fpr_mask=0xC0000000
