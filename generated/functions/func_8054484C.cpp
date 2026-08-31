#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054484C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8054484C;

loc_8054484C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 2883584;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r4 = (r4 + -16384);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    }
    r27 = 0x809C0000u;
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r27 + -10464));
    ctx->lr = 0x80544874u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052C20Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80544878:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805448A0;
    }
}

loc_80544880:
{
    r5 = 196608;
    r3 = MemoryInline::FlatRead32((r27 + -10464));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r5 = (r5 + -32768);
    r6 = 0;
    r7 = 1;
    ctx->lr = 0x8054489Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052C0B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = r3;
}

loc_805448A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805448A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805448BC;
    }
}

loc_805448A8:
{
    r3 = (r30 + 131072);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 20481), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 20482), static_cast<uint8_t>(r0));
    goto loc_80544974;
}

loc_805448BC:
{
    r27 = MemoryInline::FlatRead32((r30 + 20));
    r3 = 131072;
    r4 = (r3 + 32764);
    r3 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D1CA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r4 = (r27 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 32764));
}

loc_805448DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80544960;
    }
}

loc_805448E0:
{
    r5 = MemoryInline::FlatRead32((r30 + 20));
    r4 = 0;
    r3 = MemoryInline::FlatRead32(r5);
    r0 = (r3 + -1380646912);
}

loc_805448F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21316))) {
        goto loc_8054490C;
    }
}

loc_805448F8:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r3 + -808452096);
}

loc_80544904:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12342))) {
        goto loc_8054490C;
    }
}

loc_80544908:
{
    r4 = 1;
}

loc_8054490C:
{
}

loc_80544910:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80544960;
    }
}

loc_80544914:
{
    r4 = 0x80380000u;
    r3 = (r5 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 24576));
    r0 = MemoryInline::FlatRead16((r3 + 27402));
    r3 = MemoryInline::FlatRead32((r4 + 132));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r0 = (r0_rot_1 & 15);
}

loc_80544930:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_80544948;
    }
}

loc_80544934:
{
    r3 = (r30 + 131072);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 20481), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 20482), static_cast<uint8_t>(r0));
    goto loc_80544974;
}

loc_80544948:
{
    r3 = (r30 + 131072);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 20481), static_cast<uint8_t>(r0));
    r31 = 9;
    MemoryInline::FlatWrite8((r3 + 20482), static_cast<uint8_t>(r0));
    goto loc_80544974;
}

loc_80544960:
{
    r3 = (r30 + 131072);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 20481), static_cast<uint8_t>(r0));
    r31 = 3;
    MemoryInline::FlatWrite8((r3 + 20482), static_cast<uint8_t>(r0));
}

loc_80544974:
{
    r3 = 65536;
    r27 = (r30 + 131072);
    r26 = 0;
    r29 = 0;
    r28 = (r3 + -27664);
}

loc_80544988:
{
    r0 = MemoryInline::FlatRead8((r27 + 20481));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80544990:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805449B0;
    }
}

loc_80544994:
{
    r4 = (r26 & 255);
    r3 = r30;
    r0 = (r4 * r28);
    r5 = (r30 + r0);
    r5 = (r5 + 56);
    ctx->lr = 0x805449ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80544D40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805449C4;
}

loc_805449B0:
{
    r0 = (r26 & 255);
    r3 = (r0 * r28);
    r3 = (r3 + 65536);
    r0 = (r3 + -27611);
    r30_addr_2 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_2, static_cast<uint8_t>(r29));
}

loc_805449C4:
{
    r26 = (r26 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(4));
}

loc_805449CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80544988;
    }
}

loc_805449D0:
{
    r4 = (r30 + 131072);
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = 1;
    MemoryInline::FlatWrite32((r4 + 20476), r3);
    r3 = 0x809C0000u;
    r29 = 0;
    MemoryInline::FlatWrite8((r4 + 20472), static_cast<uint8_t>(r0));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead32((r3 + -10464));
    ctx->lr = 0x805449FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052CB10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80544A00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80544A10;
    }
}

loc_80544A04:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWrite8((r30 + 52), static_cast<uint8_t>(r0));
    goto loc_80544A14;
}

loc_80544A10:
{
    MemoryInline::FlatWrite8((r30 + 52), static_cast<uint8_t>(r29));
}

loc_80544A14:
{
    r3 = (r30 + 131072);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 20480), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 20484), r31);
    r26 = MemoryInline::FlatRead32((r1 + 24));
    r27 = MemoryInline::FlatRead32((r1 + 28));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8054484C func_8054484C preserves=true fpr_mask=0x00000000
