#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80176B44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80176B44;

loc_80176B44:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = 0;
    r30 = 0x80340000u;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r31);
}

loc_80176B64:
{
    r3 = MemoryInline::FlatRead32((r30 + 18744));
    r4 = (r1 + 8);
    r5 = 1;
    r3 = (r3 + 65536);
    r3 = (r3 + 18048);
    ctx->lr = 0x80176B7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7424u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80176B84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80176D60;
    }
}

loc_80176B88:
{
    ctx->lr = 0x80176B8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192B88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctx->lr = 0x80176B90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801911C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801904ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 18744));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80176B9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80176B64;
    }
}

loc_80176BA0:
{
    r3 = (r3 + 65536);
    r27 = MemoryInline::FlatRead32((r3 + 17204));
    goto loc_80176C74;
}

loc_80176BAC:
{
    r0 = MemoryInline::FlatRead8((r27 + 11804));
    r28 = MemoryInline::FlatRead32((r27 + 11808));
}

loc_80176BB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80176C70;
    }
}

loc_80176BBC:
{
    r3 = r27;
    // inline leaf 0x80192F6C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80192F6C
}

loc_80176BC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80176C70;
    }
}

loc_80176BCC:
{
    r0 = MemoryInline::FlatRead32((r27 + 11816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(23));
}

loc_80176BD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80176BF4;
    }
}

loc_80176BD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80176BE8;
    }
}

loc_80176BDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80176BE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80176BF4;
    }
}

loc_80176BE4:
{
    goto loc_80176C04;
}

loc_80176BE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(25));
}

loc_80176BEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80176BF4;
    }
}

loc_80176BF0:
{
    goto loc_80176C04;
}

loc_80176BF4:
{
    r3 = MemoryInline::FlatRead32((r30 + 18744));
    r29 = (r3 + 65536);
    r29 = (r29 + 17212);
    goto loc_80176C10;
}

loc_80176C04:
{
    r3 = MemoryInline::FlatRead32((r30 + 18744));
    r29 = (r3 + 65536);
    r29 = (r29 + 17204);
}

loc_80176C10:
{
    r3 = r27;
    r4 = 0;
    ctx->lr = 0x80176C1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r27;
    ctx->lr = 0x80176C24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192D9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWrite8((r27 + 11804), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r27 + 11812));
}

loc_80176C30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80176C40;
    }
}

loc_80176C34:
{
    r0 = MemoryInline::FlatRead32((r27 + 11808));
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_80176C48;
}

loc_80176C40:
{
    r0 = MemoryInline::FlatRead32((r27 + 11808));
    MemoryInline::FlatWrite32((r3 + 11808), r0);
}

loc_80176C48:
{
    r3 = MemoryInline::FlatRead32((r27 + 11808));
}

loc_80176C50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80176C60;
    }
}

loc_80176C54:
{
    r0 = MemoryInline::FlatRead32((r27 + 11812));
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_80176C68;
}

loc_80176C60:
{
    r0 = MemoryInline::FlatRead32((r27 + 11812));
    MemoryInline::FlatWrite32((r3 + 11812), r0);
}

loc_80176C68:
{
    MemoryInline::FlatWrite32((r27 + 11808), r31);
    MemoryInline::FlatWrite32((r27 + 11812), r31);
}

loc_80176C70:
{
    r27 = r28;
}

loc_80176C74:
{
}

loc_80176C78:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80176BAC;
    }
}

loc_80176C7C:
{
    r3 = MemoryInline::FlatRead32((r30 + 18744));
    r3 = (r3 + 65536);
    r29 = MemoryInline::FlatRead32((r3 + 17212));
    goto loc_80176D54;
}

loc_80176C8C:
{
    r0 = MemoryInline::FlatRead8((r29 + 11804));
    r28 = MemoryInline::FlatRead32((r29 + 11808));
}

loc_80176C98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80176D50;
    }
}

loc_80176C9C:
{
    r3 = r29;
    // inline leaf 0x80192F6C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80192F6C
}

loc_80176CA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80176D50;
    }
}

loc_80176CAC:
{
    r0 = MemoryInline::FlatRead32((r29 + 11816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(23));
}

loc_80176CB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80176CD4;
    }
}

loc_80176CB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80176CC8;
    }
}

loc_80176CBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80176CC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80176CD4;
    }
}

loc_80176CC4:
{
    goto loc_80176CE4;
}

loc_80176CC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(25));
}

loc_80176CCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80176CD4;
    }
}

loc_80176CD0:
{
    goto loc_80176CE4;
}

loc_80176CD4:
{
    r3 = MemoryInline::FlatRead32((r30 + 18744));
    r27 = (r3 + 65536);
    r27 = (r27 + 17212);
    goto loc_80176CF0;
}

loc_80176CE4:
{
    r3 = MemoryInline::FlatRead32((r30 + 18744));
    r27 = (r3 + 65536);
    r27 = (r27 + 17204);
}

loc_80176CF0:
{
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x80176CFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r29;
    ctx->lr = 0x80176D04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192D9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWrite8((r29 + 11804), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r29 + 11812));
}

loc_80176D10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80176D20;
    }
}

loc_80176D14:
{
    r0 = MemoryInline::FlatRead32((r29 + 11808));
    MemoryInline::FlatWrite32(r27, r0);
    goto loc_80176D28;
}

loc_80176D20:
{
    r0 = MemoryInline::FlatRead32((r29 + 11808));
    MemoryInline::FlatWrite32((r3 + 11808), r0);
}

loc_80176D28:
{
    r3 = MemoryInline::FlatRead32((r29 + 11808));
}

loc_80176D30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80176D40;
    }
}

loc_80176D34:
{
    r0 = MemoryInline::FlatRead32((r29 + 11812));
    MemoryInline::FlatWrite32((r27 + 4), r0);
    goto loc_80176D48;
}

loc_80176D40:
{
    r0 = MemoryInline::FlatRead32((r29 + 11812));
    MemoryInline::FlatWrite32((r3 + 11812), r0);
}

loc_80176D48:
{
    MemoryInline::FlatWrite32((r29 + 11808), r31);
    MemoryInline::FlatWrite32((r29 + 11812), r31);
}

loc_80176D50:
{
    r29 = r28;
}

loc_80176D54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80176D58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80176C8C;
    }
}

loc_80176D5C:
{
    goto loc_80176B64;
}

loc_80176D60:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_80176D64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80176B64;
    }
}

loc_80176D68:
{
    r11 = (r1 + 48);
    r3 = 0;
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
// RECOMP_REGISTRATION base 0x80176B44 func_80176B44 preserves=true fpr_mask=0x00000000
